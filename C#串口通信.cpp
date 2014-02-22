using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.IO.Ports;

namespace SerialPortTest_1
{
    public partial class FormSerialPortTest1 : Form
    {
        private StreamReader sRead;
        public int iTextbox2 = 0;	//?? 
            
        public FormSerialPortTest1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string[] str = SerialPort.GetPortNames();
            if (str == null)
            {
                MessageBox.Show("����û�д��ڣ�", "Error");
                return;
            }

            comboBox1.Items.AddRange(str);
            comboBox1.SelectedIndex = 0;
            comboBox2.SelectedIndex = 6;
            this.toolStripStatusLabel1.Text = "�˿ںţ��˿�δ��" ;
            this.toolStripStatusLabel2.Text = "�����ʣ��˿�δ��" ;
            this.toolStripStatusLabel3.Text = "����λ���˿�δ��" ;
            this.toolStripStatusLabel4.Text = "ֹͣλ���˿�δ��" ;
        }

        private void button1_Click(object sender, EventArgs e)//button1: �򿪴��� ��ť 
        {
        	//���ø������� 
            String str1 = comboBox1.Text;		//���ں� 
            String str2 = comboBox2.Text;		//������ 
            String str3 = comboBox3.Text;		//����λ 
            String str4 = comboBox4.Text;		//ֹͣλ 
            Int32 int2 = Convert.ToInt32(str2);
            Int32 int3 = Convert.ToInt32(str3);
            

            try
            {
                if(str1 == null)
                {
                    MessageBox.Show("����ѡ�񴮿ڣ�","Error");
                    return;
                }

                serialPort1.PortName = str1;
                serialPort1.BaudRate = int2;
                serialPort1.DataBits = int3;
                switch (comboBox4.Text)
                {
                    case "1":
                        serialPort1.StopBits = StopBits.One;
                        break;
                    case "1.5":
                        serialPort1.StopBits = StopBits.OnePointFive;
                        break;
                    case "2":
                        serialPort1.StopBits = StopBits.Two;
                        break;
                    default:
                        MessageBox.Show("Error����������ȷ", "Error");
                        break;
                }


                if(serialPort1.IsOpen == true)
                {
                    serialPort1.Close();
                }

                serialPort1.Open();
                MessageBox.Show("���ڴ򿪳ɹ���",str1);

//������״̬��
                this.toolStripStatusLabel1.Text = "�˿ںţ�" + serialPort1.PortName + " ";
                this.toolStripStatusLabel2.Text = "�����ʣ�" + serialPort1.BaudRate + " ";
                this.toolStripStatusLabel3.Text = "����λ��" + serialPort1.DataBits + " ";
                this.toolStripStatusLabel4.Text = "ֹͣλ��" + serialPort1.StopBits + " ";
                
                //����Ҫ�ɱ�İ�ť��Ϊ������ 
                button1.Enabled = false;
                comboBox1.Enabled = false;
                comboBox2.Enabled = false;
                comboBox3.Enabled = false;
                comboBox4.Enabled = false;
            }
            catch(Exception er)
            {
                MessageBox.Show("Error:"+er.Message,"Error");
                return ;
            }
        }
		
		//�رմ��� 
        private void button2_Click(object sender, EventArgs e)
        {
        	//�ָ�����ť�Ĺ��� 
            button1.Enabled = true;
            comboBox1.Enabled = true;
            comboBox2.Enabled = true;
            comboBox3.Enabled = true;
            comboBox4.Enabled = true;
            
            serialPort1.Close();		//�رն˿� 
            //״̬�� 
            this.toolStripStatusLabel1.Text = "�˿ںţ��˿�δ��";
            this.toolStripStatusLabel2.Text = "�����ʣ��˿�δ��";
            this.toolStripStatusLabel3.Text = "����λ���˿�δ��";
            this.toolStripStatusLabel4.Text = "ֹͣλ���˿�δ��";
        }

        private void �˳�XToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }


        //����
        private void button3_Click(object sender, EventArgs e)
        {
            if (button1.Enabled == true) 
            {
                MessageBox.Show("���ȴ򿪴��ڣ�","Error");
                return;
            }
            
            String str1;         
            str1 = textBox1.Text;
            byte[] data = Encoding.Default.GetBytes(str1);
            if (checkBox1.Checked == true)	//��HEX���͡� ��ť 
            {
                for (int i = 0; i < data.Length; i++)
                {
                    byte temp = data[i];
                    string tempHex = temp.ToString("X2") + " ";//X��16���ơ�2��2λ  10����ʾ��0X0A��������0XA 
                    serialPort1.Write(tempHex);		//��16���Ʒ���ʱ 
                }
            }
            else		//���ַ�����ʽ����ʱ 
            {
                serialPort1.Write(data, 0, data.Length);
            }
        }

        //ʹ��Control.Invoke
        public delegate void DeleUpdateTextbox(string dataRe);

        private void serialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            string dataRe;            
            byte[] byteRead = new byte[serialPort1.BytesToRead];
            
            DeleUpdateTextbox deleupdatetextbox = new DeleUpdateTextbox(UpdateTextbox);

            serialPort1.Read(byteRead, 0, byteRead.Length);
            
            if (checkBox2.Checked == false)	//"HEX����" û��ѡ��ʱ 
            {
                dataRe = Encoding.Default.GetString(byteRead);
                textBox2.Invoke(deleupdatetextbox, dataRe);
            }
            else							//"HEX����" ѡ��ʱ 
            {
                for (int i = 0; i < byteRead.Length; i++)
                {
                    byte temp = byteRead[i];
                    dataRe = temp.ToString("X2") + " ";
                    textBox2.Invoke(deleupdatetextbox, dataRe);
                }
            }
              
        }

        

        private void UpdateTextbox(string dataRe)
        {

            if (iTextbox2 == 0)//iTextbox2�����ǽ��տ�Ϊ�յ���˼�� 
            {
                this.textBox2.Text = dataRe ;
                iTextbox2++;
            }
            else
            {
                textBox2.AppendText(dataRe ); 		//�ɶ϶� textBox2 �ǽ����� 
            }
        }
		
		//�����ڰ�ť�� 
        private void ����AToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("\n��������Ƽ��߷�          \n\n�汾��   V0.2\n\n", "���ھ�ҵ �Ե�Ϊ��");
        }
		
		//���������ť 
        private void button4_Click(object sender, EventArgs e)
        {
            String filename;
            openFileDialog1.FileName = "";
            openFileDialog1.ShowDialog();
            filename = openFileDialog1.FileName;

            if (filename == "")
            {
                MessageBox.Show("��ѡ��Ҫ���͵��ļ���", "Error");
                return;
            }

            textBox3.Text = filename;

            if (filename != null)
            {
                sRead = new StreamReader(filename);
            }
            button5.Enabled = true;

        }

		// 
        private void button5_Click(object sender, EventArgs e)
        {
            string str3 = textBox3.Text;		//textBox3Ӧ���ǡ������ļ����µ��ı��� 

            if (button1.Enabled == true)
            {
                MessageBox.Show("���ȴ򿪴��ڣ�", "Error");
                return;
            }

            if (str3 == "")
            {
                MessageBox.Show("��ѡ��Ҫ���͵��ļ���", "Error");
                return;
            }

            string str1;
            str1 = textBox4.Text;			//textBox4��ʱ�䡰����� �� 
            timer1.Interval = Convert.ToInt32(str1);
            timer1.Start();
            
            
            button2.Enabled = false;
            button3.Enabled = false;
            button4.Enabled = false;
            button5.Enabled = false;
            textBox1.Enabled = false;
            textBox3.Enabled = false;
            textBox4.Enabled = false;


        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            string  str1;            
            str1 = sRead.ReadLine();

            if (str1 == null)
            {
                timer1.Stop();
                sRead.Close();
                MessageBox.Show("������ϣ�", "NICE");
                
                button2.Enabled = true;
                button3.Enabled = true;
                button4.Enabled = true;
                textBox1.Enabled = true;
                textBox3.Enabled = true;
                textBox4.Enabled = true;
                
                return;
            }
            
            byte[] data = Encoding.Default.GetBytes(str1);
            serialPort1.Write(data, 0, data.Length);
            


        }

                
        private void button6_Click(object sender, EventArgs e)
        {
            timer1.Stop();

            button2.Enabled = true;
            button3.Enabled = true;
            button4.Enabled = true;
            textBox1.Enabled = true;
            textBox3.Enabled = true;
            textBox4.Enabled = true;

        }

        private void textBox1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyValue == 13)
            {
                if (button1.Enabled == true)
                {
                    MessageBox.Show("���ȴ򿪴��ڣ�", "Error");
                    return;
                }

                String str1;
                str1 = textBox1.Text;

                byte[] data = Encoding.Default.GetBytes(str1);
               
                serialPort1.Write(data, 0, data.Length);
                textBox1.Clear();
                
            }

            return;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox2.Clear();
            iTextbox2 = 0;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox2.Clear();
            iTextbox2 = 0;      
      
        }
    }
}





namespace SerialPortTest_1
{
    partial class FormSerialPortTest1
    {
        /// <summary>
        /// ����������������
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// ������������ʹ�õ���Դ��
        /// </summary>
        /// <param name="disposing">���Ӧ�ͷ��й���Դ��Ϊ true������Ϊ false��</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows ������������ɵĴ���

        /// <summary>
        /// �����֧������ķ��� - ��Ҫ
        /// ʹ�ô���༭���޸Ĵ˷��������ݡ�
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(FormSerialPortTest1));
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.�ļ�FToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.�˳�XToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.����HToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.����AToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.comboBox2 = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.statusStrip1 = new System.Windows.Forms.StatusStrip();
            this.toolStripStatusLabel1 = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusLabel2 = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusLabel3 = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusLabel4 = new System.Windows.Forms.ToolStripStatusLabel();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.textBox4 = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.button6 = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.comboBox4 = new System.Windows.Forms.ComboBox();
            this.comboBox3 = new System.Windows.Forms.ComboBox();
            this.label7 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.checkBox2 = new System.Windows.Forms.CheckBox();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.button8 = new System.Windows.Forms.Button();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.button7 = new System.Windows.Forms.Button();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.menuStrip1.SuspendLayout();
            this.statusStrip1.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.SuspendLayout();
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            resources.ApplyResources(this.comboBox1, "comboBox1");
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Sorted = true;
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.�ļ�FToolStripMenuItem,
            this.����HToolStripMenuItem});
            resources.ApplyResources(this.menuStrip1, "menuStrip1");
            this.menuStrip1.Name = "menuStrip1";
            // 
            // �ļ�FToolStripMenuItem
            // 
            this.�ļ�FToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.�˳�XToolStripMenuItem});
            this.�ļ�FToolStripMenuItem.Name = "�ļ�FToolStripMenuItem";
            resources.ApplyResources(this.�ļ�FToolStripMenuItem, "�ļ�FToolStripMenuItem");
            // 
            // �˳�XToolStripMenuItem
            // 
            this.�˳�XToolStripMenuItem.Name = "�˳�XToolStripMenuItem";
            resources.ApplyResources(this.�˳�XToolStripMenuItem, "�˳�XToolStripMenuItem");
            this.�˳�XToolStripMenuItem.Click += new System.EventHandler(this.�˳�XToolStripMenuItem_Click);
            // 
            // ����HToolStripMenuItem
            // 
            this.����HToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.����AToolStripMenuItem});
            this.����HToolStripMenuItem.Name = "����HToolStripMenuItem";
            resources.ApplyResources(this.����HToolStripMenuItem, "����HToolStripMenuItem");
            // 
            // ����AToolStripMenuItem
            // 
            this.����AToolStripMenuItem.Name = "����AToolStripMenuItem";
            resources.ApplyResources(this.����AToolStripMenuItem, "����AToolStripMenuItem");
            this.����AToolStripMenuItem.Click += new System.EventHandler(this.����AToolStripMenuItem_Click);
            // 
            // button1
            // 
            resources.ApplyResources(this.button1, "button1");
            this.button1.Name = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            resources.ApplyResources(this.button2, "button2");
            this.button2.Name = "button2";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            resources.ApplyResources(this.button3, "button3");
            this.button3.Name = "button3";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // textBox1
            // 
            resources.ApplyResources(this.textBox1, "textBox1");
            this.textBox1.Name = "textBox1";
            this.textBox1.KeyDown += new System.Windows.Forms.KeyEventHandler(this.textBox1_KeyDown);
            // 
            // textBox2
            // 
            this.textBox2.AcceptsReturn = true;
            this.textBox2.BackColor = System.Drawing.Color.White;
            this.textBox2.ForeColor = System.Drawing.Color.Black;
            resources.ApplyResources(this.textBox2, "textBox2");
            this.textBox2.Name = "textBox2";
            this.textBox2.ReadOnly = true;
            // 
            // serialPort1
            // 
            this.serialPort1.StopBits = System.IO.Ports.StopBits.OnePointFive;
            this.serialPort1.DataReceived += new System.IO.Ports.SerialDataReceivedEventHandler(this.serialPort1_DataReceived);
            // 
            // timer1
            // 
            this.timer1.Interval = 5;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // comboBox2
            // 
            this.comboBox2.FormattingEnabled = true;
            this.comboBox2.Items.AddRange(new object[] {
            resources.GetString("comboBox2.Items"),
            resources.GetString("comboBox2.Items1"),
            resources.GetString("comboBox2.Items2"),
            resources.GetString("comboBox2.Items3"),
            resources.GetString("comboBox2.Items4"),
            resources.GetString("comboBox2.Items5"),
            resources.GetString("comboBox2.Items6"),
            resources.GetString("comboBox2.Items7"),
            resources.GetString("comboBox2.Items8"),
            resources.GetString("comboBox2.Items9"),
            resources.GetString("comboBox2.Items10"),
            resources.GetString("comboBox2.Items11"),
            resources.GetString("comboBox2.Items12")});
            resources.ApplyResources(this.comboBox2, "comboBox2");
            this.comboBox2.Name = "comboBox2";
            // 
            // label1
            // 
            resources.ApplyResources(this.label1, "label1");
            this.label1.Name = "label1";
            // 
            // label2
            // 
            resources.ApplyResources(this.label2, "label2");
            this.label2.Name = "label2";
            // 
            // label3
            // 
            resources.ApplyResources(this.label3, "label3");
            this.label3.Name = "label3";
            // 
            // label4
            // 
            resources.ApplyResources(this.label4, "label4");
            this.label4.Name = "label4";
            // 
            // statusStrip1
            // 
            this.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripStatusLabel1,
            this.toolStripStatusLabel2,
            this.toolStripStatusLabel3,
            this.toolStripStatusLabel4});
            resources.ApplyResources(this.statusStrip1, "statusStrip1");
            this.statusStrip1.Name = "statusStrip1";
            // 
            // toolStripStatusLabel1
            // 
            resources.ApplyResources(this.toolStripStatusLabel1, "toolStripStatusLabel1");
            this.toolStripStatusLabel1.BorderSides = System.Windows.Forms.ToolStripStatusLabelBorderSides.Right;
            this.toolStripStatusLabel1.Name = "toolStripStatusLabel1";
            // 
            // toolStripStatusLabel2
            // 
            resources.ApplyResources(this.toolStripStatusLabel2, "toolStripStatusLabel2");
            this.toolStripStatusLabel2.BorderSides = System.Windows.Forms.ToolStripStatusLabelBorderSides.Right;
            this.toolStripStatusLabel2.Name = "toolStripStatusLabel2";
            // 
            // toolStripStatusLabel3
            // 
            resources.ApplyResources(this.toolStripStatusLabel3, "toolStripStatusLabel3");
            this.toolStripStatusLabel3.BorderSides = System.Windows.Forms.ToolStripStatusLabelBorderSides.Right;
            this.toolStripStatusLabel3.Name = "toolStripStatusLabel3";
            // 
            // toolStripStatusLabel4
            // 
            resources.ApplyResources(this.toolStripStatusLabel4, "toolStripStatusLabel4");
            this.toolStripStatusLabel4.BorderSides = System.Windows.Forms.ToolStripStatusLabelBorderSides.Right;
            this.toolStripStatusLabel4.Name = "toolStripStatusLabel4";
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            // 
            // textBox3
            // 
            resources.ApplyResources(this.textBox3, "textBox3");
            this.textBox3.Name = "textBox3";
            // 
            // button4
            // 
            resources.ApplyResources(this.button4, "button4");
            this.button4.Name = "button4";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // button5
            // 
            resources.ApplyResources(this.button5, "button5");
            this.button5.Name = "button5";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // textBox4
            // 
            resources.ApplyResources(this.textBox4, "textBox4");
            this.textBox4.Name = "textBox4";
            // 
            // label5
            // 
            resources.ApplyResources(this.label5, "label5");
            this.label5.Name = "label5";
            // 
            // button6
            // 
            this.button6.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            resources.ApplyResources(this.button6, "button6");
            this.button6.Name = "button6";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.button6_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.comboBox4);
            this.groupBox1.Controls.Add(this.comboBox3);
            this.groupBox1.Controls.Add(this.label7);
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.comboBox2);
            this.groupBox1.Controls.Add(this.button2);
            this.groupBox1.Controls.Add(this.button1);
            this.groupBox1.Controls.Add(this.comboBox1);
            resources.ApplyResources(this.groupBox1, "groupBox1");
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.TabStop = false;
            // 
            // comboBox4
            // 
            this.comboBox4.FormattingEnabled = true;
            this.comboBox4.Items.AddRange(new object[] {
            resources.GetString("comboBox4.Items"),
            resources.GetString("comboBox4.Items1")});
            resources.ApplyResources(this.comboBox4, "comboBox4");
            this.comboBox4.Name = "comboBox4";
            // 
            // comboBox3
            // 
            this.comboBox3.FormattingEnabled = true;
            this.comboBox3.Items.AddRange(new object[] {
            resources.GetString("comboBox3.Items"),
            resources.GetString("comboBox3.Items1"),
            resources.GetString("comboBox3.Items2"),
            resources.GetString("comboBox3.Items3")});
            resources.ApplyResources(this.comboBox3, "comboBox3");
            this.comboBox3.Name = "comboBox3";
            // 
            // label7
            // 
            resources.ApplyResources(this.label7, "label7");
            this.label7.Name = "label7";
            // 
            // label6
            // 
            resources.ApplyResources(this.label6, "label6");
            this.label6.Name = "label6";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.checkBox2);
            this.groupBox2.Controls.Add(this.checkBox1);
            this.groupBox2.Controls.Add(this.button8);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Controls.Add(this.textBox1);
            this.groupBox2.Controls.Add(this.button3);
            resources.ApplyResources(this.groupBox2, "groupBox2");
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.TabStop = false;
            // 
            // checkBox2
            // 
            resources.ApplyResources(this.checkBox2, "checkBox2");
            this.checkBox2.Name = "checkBox2";
            this.checkBox2.UseVisualStyleBackColor = true;
            // 
            // checkBox1
            // 
            resources.ApplyResources(this.checkBox1, "checkBox1");
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.UseVisualStyleBackColor = true;
            // 
            // button8
            // 
            resources.ApplyResources(this.button8, "button8");
            this.button8.Name = "button8";
            this.button8.UseVisualStyleBackColor = true;
            this.button8.Click += new System.EventHandler(this.button8_Click);
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.button7);
            this.groupBox3.Controls.Add(this.button6);
            this.groupBox3.Controls.Add(this.label5);
            this.groupBox3.Controls.Add(this.textBox4);
            this.groupBox3.Controls.Add(this.button5);
            this.groupBox3.Controls.Add(this.button4);
            this.groupBox3.Controls.Add(this.textBox3);
            resources.ApplyResources(this.groupBox3, "groupBox3");
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.TabStop = false;
            // 
            // button7
            // 
            resources.ApplyResources(this.button7, "button7");
            this.button7.Name = "button7";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.button7_Click);
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.label4);
            this.groupBox4.Controls.Add(this.textBox2);
            resources.ApplyResources(this.groupBox4, "groupBox4");
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.TabStop = false;
            // 
            // FormSerialPortTest1
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.CancelButton = this.button6;
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.statusStrip1);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.MaximizeBox = false;
            this.Name = "FormSerialPortTest1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.statusStrip1.ResumeLayout(false);
            this.statusStrip1.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem �ļ�FToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem �˳�XToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem ����HToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem ����AToolStripMenuItem;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.ComboBox comboBox2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.StatusStrip statusStrip1;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.TextBox textBox4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.ComboBox comboBox4;
        private System.Windows.Forms.ComboBox comboBox3;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel1;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel2;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel3;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel4;
        private System.Windows.Forms.Button button8;
        private System.Windows.Forms.CheckBox checkBox2;
        private System.Windows.Forms.CheckBox checkBox1;
    }
}

