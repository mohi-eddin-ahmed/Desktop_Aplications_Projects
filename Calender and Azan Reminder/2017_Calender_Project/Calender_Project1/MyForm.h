#pragma once

#include "MyForm2.h"

namespace Calender_Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::TabPage^  tabPage12;







	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label84;

private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Button^  button30;
private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;


private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::Button^  button33;
private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::Button^  button38;
private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Button^  button40;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::Button^  button46;
private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Button^  button51;
private: System::Windows::Forms::Button^  button52;
private: System::Windows::Forms::Button^  button53;
private: System::Windows::Forms::Button^  button54;
private: System::Windows::Forms::Button^  button55;
private: System::Windows::Forms::Button^  button56;
private: System::Windows::Forms::Button^  button57;
private: System::Windows::Forms::Button^  button58;
private: System::Windows::Forms::Button^  button59;



private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::Button^  button90;
private: System::Windows::Forms::Button^  button89;
private: System::Windows::Forms::Button^  button88;
private: System::Windows::Forms::Button^  button60;
private: System::Windows::Forms::Button^  button61;
private: System::Windows::Forms::Button^  button62;
private: System::Windows::Forms::Button^  button63;
private: System::Windows::Forms::Button^  button64;
private: System::Windows::Forms::Button^  button65;
private: System::Windows::Forms::Button^  button66;
private: System::Windows::Forms::Button^  button67;
private: System::Windows::Forms::Button^  button68;
private: System::Windows::Forms::Button^  button69;
private: System::Windows::Forms::Button^  button70;
private: System::Windows::Forms::Button^  button71;
private: System::Windows::Forms::Button^  button72;
private: System::Windows::Forms::Button^  button73;
private: System::Windows::Forms::Button^  button74;
private: System::Windows::Forms::Button^  button75;
private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::Button^  button79;
private: System::Windows::Forms::Button^  button80;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Button^  button82;
private: System::Windows::Forms::Button^  button83;
private: System::Windows::Forms::Button^  button84;
private: System::Windows::Forms::Button^  button85;
private: System::Windows::Forms::Button^  button86;
private: System::Windows::Forms::Button^  button87;
private: System::Windows::Forms::Button^  button120;
private: System::Windows::Forms::Button^  button119;
private: System::Windows::Forms::Button^  button91;
private: System::Windows::Forms::Button^  button92;
private: System::Windows::Forms::Button^  button93;
private: System::Windows::Forms::Button^  button94;
private: System::Windows::Forms::Button^  button95;
private: System::Windows::Forms::Button^  button96;
private: System::Windows::Forms::Button^  button97;
private: System::Windows::Forms::Button^  button98;
private: System::Windows::Forms::Button^  button99;
private: System::Windows::Forms::Button^  button100;
private: System::Windows::Forms::Button^  button101;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::Button^  button103;
private: System::Windows::Forms::Button^  button104;
private: System::Windows::Forms::Button^  button105;
private: System::Windows::Forms::Button^  button106;
private: System::Windows::Forms::Button^  button107;
private: System::Windows::Forms::Button^  button108;
private: System::Windows::Forms::Button^  button109;
private: System::Windows::Forms::Button^  button110;
private: System::Windows::Forms::Button^  button111;
private: System::Windows::Forms::Button^  button112;
private: System::Windows::Forms::Button^  button113;
private: System::Windows::Forms::Button^  button114;
private: System::Windows::Forms::Button^  button115;
private: System::Windows::Forms::Button^  button116;
private: System::Windows::Forms::Button^  button117;
private: System::Windows::Forms::Button^  button118;
private: System::Windows::Forms::Button^  button145;
private: System::Windows::Forms::Button^  button138;
private: System::Windows::Forms::Button^  button131;
private: System::Windows::Forms::Button^  button124;
private: System::Windows::Forms::Button^  button121;
private: System::Windows::Forms::Button^  button122;
private: System::Windows::Forms::Button^  button123;
private: System::Windows::Forms::Button^  button125;
private: System::Windows::Forms::Button^  button126;
private: System::Windows::Forms::Button^  button127;
private: System::Windows::Forms::Button^  button128;
private: System::Windows::Forms::Button^  button129;
private: System::Windows::Forms::Button^  button130;
private: System::Windows::Forms::Button^  button132;
private: System::Windows::Forms::Button^  button133;
private: System::Windows::Forms::Button^  button134;
private: System::Windows::Forms::Button^  button135;
private: System::Windows::Forms::Button^  button136;
private: System::Windows::Forms::Button^  button137;
private: System::Windows::Forms::Button^  button139;
private: System::Windows::Forms::Button^  button140;
private: System::Windows::Forms::Button^  button141;
private: System::Windows::Forms::Button^  button142;
private: System::Windows::Forms::Button^  button143;
private: System::Windows::Forms::Button^  button144;
private: System::Windows::Forms::Button^  button146;
private: System::Windows::Forms::Button^  button147;
private: System::Windows::Forms::Button^  button148;
private: System::Windows::Forms::Button^  button149;
private: System::Windows::Forms::Button^  button150;
private: System::Windows::Forms::Button^  button151;
private: System::Windows::Forms::Button^  button152;
private: System::Windows::Forms::Button^  button153;
private: System::Windows::Forms::Button^  button154;
private: System::Windows::Forms::Button^  button155;
private: System::Windows::Forms::Button^  button156;
private: System::Windows::Forms::Button^  button157;
private: System::Windows::Forms::Button^  button158;
private: System::Windows::Forms::Button^  button159;
private: System::Windows::Forms::Button^  button160;
private: System::Windows::Forms::Button^  button161;
private: System::Windows::Forms::Button^  button162;
private: System::Windows::Forms::Button^  button163;
private: System::Windows::Forms::Button^  button164;
private: System::Windows::Forms::Button^  button165;
private: System::Windows::Forms::Button^  button166;
private: System::Windows::Forms::Button^  button167;
private: System::Windows::Forms::Button^  button168;
private: System::Windows::Forms::Button^  button169;
private: System::Windows::Forms::Button^  button170;
private: System::Windows::Forms::Button^  button171;
private: System::Windows::Forms::Button^  button172;
private: System::Windows::Forms::Button^  button173;
private: System::Windows::Forms::Button^  button174;
private: System::Windows::Forms::Button^  button175;
private: System::Windows::Forms::Button^  button176;
private: System::Windows::Forms::Button^  button177;
private: System::Windows::Forms::Button^  button178;
private: System::Windows::Forms::Button^  button179;
private: System::Windows::Forms::Button^  button185;
private: System::Windows::Forms::Button^  button184;
private: System::Windows::Forms::Button^  button183;
private: System::Windows::Forms::Button^  button182;
private: System::Windows::Forms::Button^  button181;
private: System::Windows::Forms::Button^  button180;
private: System::Windows::Forms::Button^  button216;
private: System::Windows::Forms::Button^  button186;
private: System::Windows::Forms::Button^  button187;
private: System::Windows::Forms::Button^  button188;
private: System::Windows::Forms::Button^  button189;
private: System::Windows::Forms::Button^  button190;
private: System::Windows::Forms::Button^  button191;
private: System::Windows::Forms::Button^  button192;
private: System::Windows::Forms::Button^  button193;
private: System::Windows::Forms::Button^  button194;
private: System::Windows::Forms::Button^  button195;
private: System::Windows::Forms::Button^  button196;
private: System::Windows::Forms::Button^  button197;
private: System::Windows::Forms::Button^  button198;
private: System::Windows::Forms::Button^  button199;
private: System::Windows::Forms::Button^  button200;
private: System::Windows::Forms::Button^  button201;
private: System::Windows::Forms::Button^  button202;
private: System::Windows::Forms::Button^  button203;
private: System::Windows::Forms::Button^  button204;
private: System::Windows::Forms::Button^  button205;
private: System::Windows::Forms::Button^  button206;
private: System::Windows::Forms::Button^  button207;
private: System::Windows::Forms::Button^  button208;
private: System::Windows::Forms::Button^  button209;
private: System::Windows::Forms::Button^  button210;
private: System::Windows::Forms::Button^  button211;
private: System::Windows::Forms::Button^  button212;
private: System::Windows::Forms::Button^  button213;
private: System::Windows::Forms::Button^  button214;
private: System::Windows::Forms::Button^  button215;
private: System::Windows::Forms::Button^  button251;
private: System::Windows::Forms::Button^  button250;
private: System::Windows::Forms::Button^  button249;
private: System::Windows::Forms::Button^  button248;
private: System::Windows::Forms::Button^  button247;
private: System::Windows::Forms::Button^  button246;
private: System::Windows::Forms::Button^  button245;
private: System::Windows::Forms::Button^  button217;
private: System::Windows::Forms::Button^  button218;
private: System::Windows::Forms::Button^  button219;
private: System::Windows::Forms::Button^  button220;
private: System::Windows::Forms::Button^  button221;
private: System::Windows::Forms::Button^  button222;
private: System::Windows::Forms::Button^  button223;
private: System::Windows::Forms::Button^  button224;
private: System::Windows::Forms::Button^  button225;
private: System::Windows::Forms::Button^  button226;
private: System::Windows::Forms::Button^  button227;
private: System::Windows::Forms::Button^  button228;
private: System::Windows::Forms::Button^  button229;
private: System::Windows::Forms::Button^  button230;
private: System::Windows::Forms::Button^  button231;
private: System::Windows::Forms::Button^  button232;
private: System::Windows::Forms::Button^  button233;
private: System::Windows::Forms::Button^  button234;
private: System::Windows::Forms::Button^  button235;
private: System::Windows::Forms::Button^  button236;
private: System::Windows::Forms::Button^  button237;
private: System::Windows::Forms::Button^  button238;
private: System::Windows::Forms::Button^  button239;
private: System::Windows::Forms::Button^  button240;
private: System::Windows::Forms::Button^  button241;
private: System::Windows::Forms::Button^  button242;
private: System::Windows::Forms::Button^  button243;
private: System::Windows::Forms::Button^  button244;
private: System::Windows::Forms::Button^  button287;
private: System::Windows::Forms::Button^  button286;
private: System::Windows::Forms::Button^  button285;
private: System::Windows::Forms::Button^  button284;
private: System::Windows::Forms::Button^  button283;
private: System::Windows::Forms::Button^  button253;
private: System::Windows::Forms::Button^  button254;
private: System::Windows::Forms::Button^  button255;
private: System::Windows::Forms::Button^  button256;
private: System::Windows::Forms::Button^  button257;
private: System::Windows::Forms::Button^  button258;
private: System::Windows::Forms::Button^  button259;
private: System::Windows::Forms::Button^  button260;
private: System::Windows::Forms::Button^  button261;
private: System::Windows::Forms::Button^  button262;
private: System::Windows::Forms::Button^  button263;
private: System::Windows::Forms::Button^  button264;
private: System::Windows::Forms::Button^  button265;
private: System::Windows::Forms::Button^  button266;
private: System::Windows::Forms::Button^  button267;
private: System::Windows::Forms::Button^  button268;
private: System::Windows::Forms::Button^  button269;
private: System::Windows::Forms::Button^  button270;
private: System::Windows::Forms::Button^  button271;
private: System::Windows::Forms::Button^  button272;
private: System::Windows::Forms::Button^  button273;
private: System::Windows::Forms::Button^  button274;
private: System::Windows::Forms::Button^  button275;
private: System::Windows::Forms::Button^  button276;
private: System::Windows::Forms::Button^  button277;
private: System::Windows::Forms::Button^  button278;
private: System::Windows::Forms::Button^  button279;
private: System::Windows::Forms::Button^  button280;
private: System::Windows::Forms::Button^  button281;
private: System::Windows::Forms::Button^  button282;
private: System::Windows::Forms::Button^  button252;
private: System::Windows::Forms::Button^  button288;
private: System::Windows::Forms::Button^  button289;
private: System::Windows::Forms::Button^  button290;
private: System::Windows::Forms::Button^  button291;
private: System::Windows::Forms::Button^  button292;
private: System::Windows::Forms::Button^  button293;
private: System::Windows::Forms::Button^  button294;
private: System::Windows::Forms::Button^  button295;
private: System::Windows::Forms::Button^  button296;
private: System::Windows::Forms::Button^  button297;
private: System::Windows::Forms::Button^  button298;
private: System::Windows::Forms::Button^  button299;
private: System::Windows::Forms::Button^  button300;
private: System::Windows::Forms::Button^  button301;
private: System::Windows::Forms::Button^  button302;
private: System::Windows::Forms::Button^  button303;
private: System::Windows::Forms::Button^  button304;
private: System::Windows::Forms::Button^  button305;
private: System::Windows::Forms::Button^  button306;
private: System::Windows::Forms::Button^  button307;
private: System::Windows::Forms::Button^  button308;
private: System::Windows::Forms::Button^  button309;
private: System::Windows::Forms::Button^  button310;
private: System::Windows::Forms::Button^  button311;
private: System::Windows::Forms::Button^  button312;
private: System::Windows::Forms::Button^  button313;
private: System::Windows::Forms::Button^  button314;
private: System::Windows::Forms::Button^  button315;
private: System::Windows::Forms::Button^  button316;
private: System::Windows::Forms::Button^  button317;
private: System::Windows::Forms::Button^  button319;
private: System::Windows::Forms::Button^  button320;
private: System::Windows::Forms::Button^  button321;
private: System::Windows::Forms::Button^  button322;
private: System::Windows::Forms::Button^  button323;
private: System::Windows::Forms::Button^  button324;
private: System::Windows::Forms::Button^  button325;
private: System::Windows::Forms::Button^  button326;
private: System::Windows::Forms::Button^  button327;
private: System::Windows::Forms::Button^  button328;
private: System::Windows::Forms::Button^  button329;
private: System::Windows::Forms::Button^  button330;
private: System::Windows::Forms::Button^  button331;
private: System::Windows::Forms::Button^  button332;
private: System::Windows::Forms::Button^  button333;
private: System::Windows::Forms::Button^  button334;
private: System::Windows::Forms::Button^  button335;
private: System::Windows::Forms::Button^  button336;
private: System::Windows::Forms::Button^  button337;
private: System::Windows::Forms::Button^  button338;
private: System::Windows::Forms::Button^  button339;
private: System::Windows::Forms::Button^  button340;
private: System::Windows::Forms::Button^  button341;
private: System::Windows::Forms::Button^  button342;
private: System::Windows::Forms::Button^  button343;
private: System::Windows::Forms::Button^  button344;
private: System::Windows::Forms::Button^  button345;
private: System::Windows::Forms::Button^  button346;
private: System::Windows::Forms::Button^  button347;
private: System::Windows::Forms::Button^  button348;
private: System::Windows::Forms::Button^  button378;
private: System::Windows::Forms::Button^  button318;
private: System::Windows::Forms::Button^  button349;
private: System::Windows::Forms::Button^  button350;
private: System::Windows::Forms::Button^  button351;
private: System::Windows::Forms::Button^  button352;
private: System::Windows::Forms::Button^  button353;
private: System::Windows::Forms::Button^  button354;
private: System::Windows::Forms::Button^  button355;
private: System::Windows::Forms::Button^  button356;
private: System::Windows::Forms::Button^  button357;
private: System::Windows::Forms::Button^  button358;
private: System::Windows::Forms::Button^  button359;
private: System::Windows::Forms::Button^  button360;
private: System::Windows::Forms::Button^  button361;
private: System::Windows::Forms::Button^  button362;
private: System::Windows::Forms::Button^  button363;
private: System::Windows::Forms::Button^  button364;
private: System::Windows::Forms::Button^  button365;
private: System::Windows::Forms::Button^  button366;
private: System::Windows::Forms::Button^  button367;
private: System::Windows::Forms::Button^  button368;
private: System::Windows::Forms::Button^  button369;
private: System::Windows::Forms::Button^  button370;
private: System::Windows::Forms::Button^  button371;
private: System::Windows::Forms::Button^  button372;
private: System::Windows::Forms::Button^  button373;
private: System::Windows::Forms::Button^  button374;
private: System::Windows::Forms::Button^  button375;
private: System::Windows::Forms::Button^  button376;
private: System::Windows::Forms::Button^  button377;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label101;

private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::TextBox^  textBox3;

private: System::Windows::Forms::Label^  label99;


private: System::Windows::Forms::Timer^  timer1;

private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Label^  label107;
private: System::Windows::Forms::Label^  label108;

private: System::Windows::Forms::TextBox^  f;
private: System::Windows::Forms::TextBox^  d;
private: System::Windows::Forms::TextBox^  a;
private: System::Windows::Forms::TextBox^  m;
private: System::Windows::Forms::TextBox^  i;






private: System::Windows::Forms::PictureBox^  pictureBox1;


private: System::Windows::Forms::StatusStrip^  statusStrip1;
private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
private: AxWMPLib::AxWindowsMediaPlayer^  vid1;












private: System::ComponentModel::IContainer^  components;











	protected:

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::Button^  button379;
			System::Windows::Forms::Button^  button381;
			System::Windows::Forms::Button^  button380;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button120 = (gcnew System::Windows::Forms::Button());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button145 = (gcnew System::Windows::Forms::Button());
			this->button138 = (gcnew System::Windows::Forms::Button());
			this->button131 = (gcnew System::Windows::Forms::Button());
			this->button124 = (gcnew System::Windows::Forms::Button());
			this->button121 = (gcnew System::Windows::Forms::Button());
			this->button122 = (gcnew System::Windows::Forms::Button());
			this->button123 = (gcnew System::Windows::Forms::Button());
			this->button125 = (gcnew System::Windows::Forms::Button());
			this->button126 = (gcnew System::Windows::Forms::Button());
			this->button127 = (gcnew System::Windows::Forms::Button());
			this->button128 = (gcnew System::Windows::Forms::Button());
			this->button129 = (gcnew System::Windows::Forms::Button());
			this->button130 = (gcnew System::Windows::Forms::Button());
			this->button132 = (gcnew System::Windows::Forms::Button());
			this->button133 = (gcnew System::Windows::Forms::Button());
			this->button134 = (gcnew System::Windows::Forms::Button());
			this->button135 = (gcnew System::Windows::Forms::Button());
			this->button136 = (gcnew System::Windows::Forms::Button());
			this->button137 = (gcnew System::Windows::Forms::Button());
			this->button139 = (gcnew System::Windows::Forms::Button());
			this->button140 = (gcnew System::Windows::Forms::Button());
			this->button141 = (gcnew System::Windows::Forms::Button());
			this->button142 = (gcnew System::Windows::Forms::Button());
			this->button143 = (gcnew System::Windows::Forms::Button());
			this->button144 = (gcnew System::Windows::Forms::Button());
			this->button146 = (gcnew System::Windows::Forms::Button());
			this->button147 = (gcnew System::Windows::Forms::Button());
			this->button148 = (gcnew System::Windows::Forms::Button());
			this->button149 = (gcnew System::Windows::Forms::Button());
			this->button150 = (gcnew System::Windows::Forms::Button());
			this->button151 = (gcnew System::Windows::Forms::Button());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button185 = (gcnew System::Windows::Forms::Button());
			this->button184 = (gcnew System::Windows::Forms::Button());
			this->button183 = (gcnew System::Windows::Forms::Button());
			this->button182 = (gcnew System::Windows::Forms::Button());
			this->button181 = (gcnew System::Windows::Forms::Button());
			this->button180 = (gcnew System::Windows::Forms::Button());
			this->button152 = (gcnew System::Windows::Forms::Button());
			this->button153 = (gcnew System::Windows::Forms::Button());
			this->button154 = (gcnew System::Windows::Forms::Button());
			this->button155 = (gcnew System::Windows::Forms::Button());
			this->button156 = (gcnew System::Windows::Forms::Button());
			this->button157 = (gcnew System::Windows::Forms::Button());
			this->button158 = (gcnew System::Windows::Forms::Button());
			this->button159 = (gcnew System::Windows::Forms::Button());
			this->button160 = (gcnew System::Windows::Forms::Button());
			this->button161 = (gcnew System::Windows::Forms::Button());
			this->button162 = (gcnew System::Windows::Forms::Button());
			this->button163 = (gcnew System::Windows::Forms::Button());
			this->button164 = (gcnew System::Windows::Forms::Button());
			this->button165 = (gcnew System::Windows::Forms::Button());
			this->button166 = (gcnew System::Windows::Forms::Button());
			this->button167 = (gcnew System::Windows::Forms::Button());
			this->button168 = (gcnew System::Windows::Forms::Button());
			this->button169 = (gcnew System::Windows::Forms::Button());
			this->button170 = (gcnew System::Windows::Forms::Button());
			this->button171 = (gcnew System::Windows::Forms::Button());
			this->button172 = (gcnew System::Windows::Forms::Button());
			this->button173 = (gcnew System::Windows::Forms::Button());
			this->button174 = (gcnew System::Windows::Forms::Button());
			this->button175 = (gcnew System::Windows::Forms::Button());
			this->button176 = (gcnew System::Windows::Forms::Button());
			this->button177 = (gcnew System::Windows::Forms::Button());
			this->button178 = (gcnew System::Windows::Forms::Button());
			this->button179 = (gcnew System::Windows::Forms::Button());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->button216 = (gcnew System::Windows::Forms::Button());
			this->button186 = (gcnew System::Windows::Forms::Button());
			this->button187 = (gcnew System::Windows::Forms::Button());
			this->button188 = (gcnew System::Windows::Forms::Button());
			this->button189 = (gcnew System::Windows::Forms::Button());
			this->button190 = (gcnew System::Windows::Forms::Button());
			this->button191 = (gcnew System::Windows::Forms::Button());
			this->button192 = (gcnew System::Windows::Forms::Button());
			this->button193 = (gcnew System::Windows::Forms::Button());
			this->button194 = (gcnew System::Windows::Forms::Button());
			this->button195 = (gcnew System::Windows::Forms::Button());
			this->button196 = (gcnew System::Windows::Forms::Button());
			this->button197 = (gcnew System::Windows::Forms::Button());
			this->button198 = (gcnew System::Windows::Forms::Button());
			this->button199 = (gcnew System::Windows::Forms::Button());
			this->button200 = (gcnew System::Windows::Forms::Button());
			this->button201 = (gcnew System::Windows::Forms::Button());
			this->button202 = (gcnew System::Windows::Forms::Button());
			this->button203 = (gcnew System::Windows::Forms::Button());
			this->button204 = (gcnew System::Windows::Forms::Button());
			this->button205 = (gcnew System::Windows::Forms::Button());
			this->button206 = (gcnew System::Windows::Forms::Button());
			this->button207 = (gcnew System::Windows::Forms::Button());
			this->button208 = (gcnew System::Windows::Forms::Button());
			this->button209 = (gcnew System::Windows::Forms::Button());
			this->button210 = (gcnew System::Windows::Forms::Button());
			this->button211 = (gcnew System::Windows::Forms::Button());
			this->button212 = (gcnew System::Windows::Forms::Button());
			this->button213 = (gcnew System::Windows::Forms::Button());
			this->button214 = (gcnew System::Windows::Forms::Button());
			this->button215 = (gcnew System::Windows::Forms::Button());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->button251 = (gcnew System::Windows::Forms::Button());
			this->button250 = (gcnew System::Windows::Forms::Button());
			this->button249 = (gcnew System::Windows::Forms::Button());
			this->button248 = (gcnew System::Windows::Forms::Button());
			this->button247 = (gcnew System::Windows::Forms::Button());
			this->button246 = (gcnew System::Windows::Forms::Button());
			this->button245 = (gcnew System::Windows::Forms::Button());
			this->button217 = (gcnew System::Windows::Forms::Button());
			this->button218 = (gcnew System::Windows::Forms::Button());
			this->button219 = (gcnew System::Windows::Forms::Button());
			this->button220 = (gcnew System::Windows::Forms::Button());
			this->button221 = (gcnew System::Windows::Forms::Button());
			this->button222 = (gcnew System::Windows::Forms::Button());
			this->button223 = (gcnew System::Windows::Forms::Button());
			this->button224 = (gcnew System::Windows::Forms::Button());
			this->button225 = (gcnew System::Windows::Forms::Button());
			this->button226 = (gcnew System::Windows::Forms::Button());
			this->button227 = (gcnew System::Windows::Forms::Button());
			this->button228 = (gcnew System::Windows::Forms::Button());
			this->button229 = (gcnew System::Windows::Forms::Button());
			this->button230 = (gcnew System::Windows::Forms::Button());
			this->button231 = (gcnew System::Windows::Forms::Button());
			this->button232 = (gcnew System::Windows::Forms::Button());
			this->button233 = (gcnew System::Windows::Forms::Button());
			this->button234 = (gcnew System::Windows::Forms::Button());
			this->button235 = (gcnew System::Windows::Forms::Button());
			this->button236 = (gcnew System::Windows::Forms::Button());
			this->button237 = (gcnew System::Windows::Forms::Button());
			this->button238 = (gcnew System::Windows::Forms::Button());
			this->button239 = (gcnew System::Windows::Forms::Button());
			this->button240 = (gcnew System::Windows::Forms::Button());
			this->button241 = (gcnew System::Windows::Forms::Button());
			this->button242 = (gcnew System::Windows::Forms::Button());
			this->button243 = (gcnew System::Windows::Forms::Button());
			this->button244 = (gcnew System::Windows::Forms::Button());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->button287 = (gcnew System::Windows::Forms::Button());
			this->button286 = (gcnew System::Windows::Forms::Button());
			this->button285 = (gcnew System::Windows::Forms::Button());
			this->button284 = (gcnew System::Windows::Forms::Button());
			this->button283 = (gcnew System::Windows::Forms::Button());
			this->button253 = (gcnew System::Windows::Forms::Button());
			this->button254 = (gcnew System::Windows::Forms::Button());
			this->button255 = (gcnew System::Windows::Forms::Button());
			this->button256 = (gcnew System::Windows::Forms::Button());
			this->button257 = (gcnew System::Windows::Forms::Button());
			this->button258 = (gcnew System::Windows::Forms::Button());
			this->button259 = (gcnew System::Windows::Forms::Button());
			this->button260 = (gcnew System::Windows::Forms::Button());
			this->button261 = (gcnew System::Windows::Forms::Button());
			this->button262 = (gcnew System::Windows::Forms::Button());
			this->button263 = (gcnew System::Windows::Forms::Button());
			this->button264 = (gcnew System::Windows::Forms::Button());
			this->button265 = (gcnew System::Windows::Forms::Button());
			this->button266 = (gcnew System::Windows::Forms::Button());
			this->button267 = (gcnew System::Windows::Forms::Button());
			this->button268 = (gcnew System::Windows::Forms::Button());
			this->button269 = (gcnew System::Windows::Forms::Button());
			this->button270 = (gcnew System::Windows::Forms::Button());
			this->button271 = (gcnew System::Windows::Forms::Button());
			this->button272 = (gcnew System::Windows::Forms::Button());
			this->button273 = (gcnew System::Windows::Forms::Button());
			this->button274 = (gcnew System::Windows::Forms::Button());
			this->button275 = (gcnew System::Windows::Forms::Button());
			this->button276 = (gcnew System::Windows::Forms::Button());
			this->button277 = (gcnew System::Windows::Forms::Button());
			this->button278 = (gcnew System::Windows::Forms::Button());
			this->button279 = (gcnew System::Windows::Forms::Button());
			this->button280 = (gcnew System::Windows::Forms::Button());
			this->button281 = (gcnew System::Windows::Forms::Button());
			this->button282 = (gcnew System::Windows::Forms::Button());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->button252 = (gcnew System::Windows::Forms::Button());
			this->button288 = (gcnew System::Windows::Forms::Button());
			this->button289 = (gcnew System::Windows::Forms::Button());
			this->button290 = (gcnew System::Windows::Forms::Button());
			this->button291 = (gcnew System::Windows::Forms::Button());
			this->button292 = (gcnew System::Windows::Forms::Button());
			this->button293 = (gcnew System::Windows::Forms::Button());
			this->button294 = (gcnew System::Windows::Forms::Button());
			this->button295 = (gcnew System::Windows::Forms::Button());
			this->button296 = (gcnew System::Windows::Forms::Button());
			this->button297 = (gcnew System::Windows::Forms::Button());
			this->button298 = (gcnew System::Windows::Forms::Button());
			this->button299 = (gcnew System::Windows::Forms::Button());
			this->button300 = (gcnew System::Windows::Forms::Button());
			this->button301 = (gcnew System::Windows::Forms::Button());
			this->button302 = (gcnew System::Windows::Forms::Button());
			this->button303 = (gcnew System::Windows::Forms::Button());
			this->button304 = (gcnew System::Windows::Forms::Button());
			this->button305 = (gcnew System::Windows::Forms::Button());
			this->button306 = (gcnew System::Windows::Forms::Button());
			this->button307 = (gcnew System::Windows::Forms::Button());
			this->button308 = (gcnew System::Windows::Forms::Button());
			this->button309 = (gcnew System::Windows::Forms::Button());
			this->button310 = (gcnew System::Windows::Forms::Button());
			this->button311 = (gcnew System::Windows::Forms::Button());
			this->button312 = (gcnew System::Windows::Forms::Button());
			this->button313 = (gcnew System::Windows::Forms::Button());
			this->button314 = (gcnew System::Windows::Forms::Button());
			this->button315 = (gcnew System::Windows::Forms::Button());
			this->button316 = (gcnew System::Windows::Forms::Button());
			this->button317 = (gcnew System::Windows::Forms::Button());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->button319 = (gcnew System::Windows::Forms::Button());
			this->button320 = (gcnew System::Windows::Forms::Button());
			this->button321 = (gcnew System::Windows::Forms::Button());
			this->button322 = (gcnew System::Windows::Forms::Button());
			this->button323 = (gcnew System::Windows::Forms::Button());
			this->button324 = (gcnew System::Windows::Forms::Button());
			this->button325 = (gcnew System::Windows::Forms::Button());
			this->button326 = (gcnew System::Windows::Forms::Button());
			this->button327 = (gcnew System::Windows::Forms::Button());
			this->button328 = (gcnew System::Windows::Forms::Button());
			this->button329 = (gcnew System::Windows::Forms::Button());
			this->button330 = (gcnew System::Windows::Forms::Button());
			this->button331 = (gcnew System::Windows::Forms::Button());
			this->button332 = (gcnew System::Windows::Forms::Button());
			this->button333 = (gcnew System::Windows::Forms::Button());
			this->button334 = (gcnew System::Windows::Forms::Button());
			this->button335 = (gcnew System::Windows::Forms::Button());
			this->button336 = (gcnew System::Windows::Forms::Button());
			this->button337 = (gcnew System::Windows::Forms::Button());
			this->button338 = (gcnew System::Windows::Forms::Button());
			this->button339 = (gcnew System::Windows::Forms::Button());
			this->button340 = (gcnew System::Windows::Forms::Button());
			this->button341 = (gcnew System::Windows::Forms::Button());
			this->button342 = (gcnew System::Windows::Forms::Button());
			this->button343 = (gcnew System::Windows::Forms::Button());
			this->button344 = (gcnew System::Windows::Forms::Button());
			this->button345 = (gcnew System::Windows::Forms::Button());
			this->button346 = (gcnew System::Windows::Forms::Button());
			this->button347 = (gcnew System::Windows::Forms::Button());
			this->button348 = (gcnew System::Windows::Forms::Button());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button378 = (gcnew System::Windows::Forms::Button());
			this->button318 = (gcnew System::Windows::Forms::Button());
			this->button349 = (gcnew System::Windows::Forms::Button());
			this->button350 = (gcnew System::Windows::Forms::Button());
			this->button351 = (gcnew System::Windows::Forms::Button());
			this->button352 = (gcnew System::Windows::Forms::Button());
			this->button353 = (gcnew System::Windows::Forms::Button());
			this->button354 = (gcnew System::Windows::Forms::Button());
			this->button355 = (gcnew System::Windows::Forms::Button());
			this->button356 = (gcnew System::Windows::Forms::Button());
			this->button357 = (gcnew System::Windows::Forms::Button());
			this->button358 = (gcnew System::Windows::Forms::Button());
			this->button359 = (gcnew System::Windows::Forms::Button());
			this->button360 = (gcnew System::Windows::Forms::Button());
			this->button361 = (gcnew System::Windows::Forms::Button());
			this->button362 = (gcnew System::Windows::Forms::Button());
			this->button363 = (gcnew System::Windows::Forms::Button());
			this->button364 = (gcnew System::Windows::Forms::Button());
			this->button365 = (gcnew System::Windows::Forms::Button());
			this->button366 = (gcnew System::Windows::Forms::Button());
			this->button367 = (gcnew System::Windows::Forms::Button());
			this->button368 = (gcnew System::Windows::Forms::Button());
			this->button369 = (gcnew System::Windows::Forms::Button());
			this->button370 = (gcnew System::Windows::Forms::Button());
			this->button371 = (gcnew System::Windows::Forms::Button());
			this->button372 = (gcnew System::Windows::Forms::Button());
			this->button373 = (gcnew System::Windows::Forms::Button());
			this->button374 = (gcnew System::Windows::Forms::Button());
			this->button375 = (gcnew System::Windows::Forms::Button());
			this->button376 = (gcnew System::Windows::Forms::Button());
			this->button377 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->f = (gcnew System::Windows::Forms::TextBox());
			this->d = (gcnew System::Windows::Forms::TextBox());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->m = (gcnew System::Windows::Forms::TextBox());
			this->i = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->vid1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			button379 = (gcnew System::Windows::Forms::Button());
			button381 = (gcnew System::Windows::Forms::Button());
			button380 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vid1))->BeginInit();
			this->SuspendLayout();
			// 
			// button379
			// 
			button379->BackColor = System::Drawing::Color::Transparent;
			button379->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button379->ForeColor = System::Drawing::Color::DeepSkyBlue;
			button379->Location = System::Drawing::Point(455, 471);
			button379->Name = L"button379";
			button379->Size = System::Drawing::Size(75, 23);
			button379->TabIndex = 8;
			button379->Text = L"Find it";
			button379->UseVisualStyleBackColor = false;
			button379->Click += gcnew System::EventHandler(this, &MyForm::button379_Click);
			// 
			// button381
			// 
			button381->BackColor = System::Drawing::Color::Transparent;
			button381->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button381->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			button381->ForeColor = System::Drawing::Color::DeepSkyBlue;
			button381->Location = System::Drawing::Point(44, 519);
			button381->Name = L"button381";
			button381->Size = System::Drawing::Size(190, 51);
			button381->TabIndex = 26;
			button381->Text = L"Add or Check my Events";
			button381->UseVisualStyleBackColor = false;
			button381->Click += gcnew System::EventHandler(this, &MyForm::button381_Click);
			// 
			// button380
			// 
			button380->BackColor = System::Drawing::Color::Transparent;
			button380->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button380->ForeColor = System::Drawing::Color::DeepSkyBlue;
			button380->Location = System::Drawing::Point(550, 471);
			button380->Name = L"button380";
			button380->Size = System::Drawing::Size(75, 23);
			button380->TabIndex = 29;
			button380->Text = L"Clear";
			button380->UseVisualStyleBackColor = false;
			button380->Click += gcnew System::EventHandler(this, &MyForm::button380_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage10);
			this->tabControl1->Controls->Add(this->tabPage11);
			this->tabControl1->Controls->Add(this->tabPage12);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(44, 87);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(605, 352);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->button31);
			this->tabPage2->Controls->Add(this->button30);
			this->tabPage2->Controls->Add(this->button29);
			this->tabPage2->Controls->Add(this->button28);
			this->tabPage2->Controls->Add(this->button27);
			this->tabPage2->Controls->Add(this->button26);
			this->tabPage2->Controls->Add(this->button25);
			this->tabPage2->Controls->Add(this->button24);
			this->tabPage2->Controls->Add(this->button23);
			this->tabPage2->Controls->Add(this->button22);
			this->tabPage2->Controls->Add(this->button21);
			this->tabPage2->Controls->Add(this->button20);
			this->tabPage2->Controls->Add(this->button19);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->button16);
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->button13);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label86);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(597, 326);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"January";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::Color::Aqua;
			this->button31->Location = System::Drawing::Point(179, 243);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(32, 22);
			this->button31->TabIndex = 44;
			this->button31->Text = L"31_Tuesday";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button30
			// 
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::Color::Aqua;
			this->button30->Location = System::Drawing::Point(91, 243);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(32, 22);
			this->button30->TabIndex = 43;
			this->button30->Text = L"30_Monday";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button29
			// 
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::Color::Aqua;
			this->button29->Location = System::Drawing::Point(9, 243);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(32, 22);
			this->button29->TabIndex = 42;
			this->button29->Text = L"29_Sunday";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button28
			// 
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::Color::Aqua;
			this->button28->Location = System::Drawing::Point(545, 196);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(32, 22);
			this->button28->TabIndex = 41;
			this->button28->Text = L"28_Saturday";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button27
			// 
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::Color::Aqua;
			this->button27->Location = System::Drawing::Point(464, 196);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(32, 22);
			this->button27->TabIndex = 40;
			this->button27->Text = L"27_Friday";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button26
			// 
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::Aqua;
			this->button26->Location = System::Drawing::Point(371, 196);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(32, 22);
			this->button26->TabIndex = 39;
			this->button26->Text = L"26_Thurusday";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button25
			// 
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::Color::Aqua;
			this->button25->Location = System::Drawing::Point(273, 196);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(32, 22);
			this->button25->TabIndex = 38;
			this->button25->Text = L"25_Wednesday";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button24
			// 
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::Color::Aqua;
			this->button24->Location = System::Drawing::Point(179, 196);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(32, 22);
			this->button24->TabIndex = 37;
			this->button24->Text = L"24_Tuesday";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button23
			// 
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::Color::Aqua;
			this->button23->Location = System::Drawing::Point(91, 196);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(32, 22);
			this->button23->TabIndex = 36;
			this->button23->Text = L"23_Monday";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button22
			// 
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::Color::Aqua;
			this->button22->Location = System::Drawing::Point(9, 196);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(32, 22);
			this->button22->TabIndex = 35;
			this->button22->Text = L"22_Sunday";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::Aqua;
			this->button21->Location = System::Drawing::Point(545, 147);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(32, 22);
			this->button21->TabIndex = 34;
			this->button21->Text = L"21_Saturday";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::Aqua;
			this->button20->Location = System::Drawing::Point(464, 147);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(32, 22);
			this->button20->TabIndex = 33;
			this->button20->Text = L"20_Friday";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::Color::Aqua;
			this->button19->Location = System::Drawing::Point(371, 147);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(32, 22);
			this->button19->TabIndex = 32;
			this->button19->Text = L"19_Thurusday";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button18
			// 
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::Aqua;
			this->button18->Location = System::Drawing::Point(273, 147);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(32, 22);
			this->button18->TabIndex = 31;
			this->button18->Text = L"18_Wednesday";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button17
			// 
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::Aqua;
			this->button17->Location = System::Drawing::Point(179, 147);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(32, 22);
			this->button17->TabIndex = 30;
			this->button17->Text = L"17_Tuesday";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::Aqua;
			this->button16->Location = System::Drawing::Point(91, 147);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(32, 22);
			this->button16->TabIndex = 29;
			this->button16->Text = L"16_Monday";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::Aqua;
			this->button15->Location = System::Drawing::Point(9, 147);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(32, 22);
			this->button15->TabIndex = 16;
			this->button15->Text = L"15_Sunday";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::Aqua;
			this->button14->Location = System::Drawing::Point(545, 97);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(32, 22);
			this->button14->TabIndex = 28;
			this->button14->Text = L"14_Saturday";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::Aqua;
			this->button13->Location = System::Drawing::Point(464, 97);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(32, 22);
			this->button13->TabIndex = 27;
			this->button13->Text = L"13_Friday";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::Aqua;
			this->button12->Location = System::Drawing::Point(371, 97);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(32, 22);
			this->button12->TabIndex = 26;
			this->button12->Text = L"12_Thurusday";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::Aqua;
			this->button11->Location = System::Drawing::Point(273, 97);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(32, 22);
			this->button11->TabIndex = 25;
			this->button11->Text = L"11_Wednesday";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::Aqua;
			this->button10->Location = System::Drawing::Point(179, 97);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(32, 22);
			this->button10->TabIndex = 24;
			this->button10->Text = L"10_Tuesday";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::Aqua;
			this->button9->Location = System::Drawing::Point(91, 97);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(32, 22);
			this->button9->TabIndex = 23;
			this->button9->Text = L"09_Monday";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::Aqua;
			this->button8->Location = System::Drawing::Point(9, 97);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(32, 22);
			this->button8->TabIndex = 22;
			this->button8->Text = L"08_Sunday";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Aqua;
			this->button7->Location = System::Drawing::Point(545, 51);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(32, 22);
			this->button7->TabIndex = 21;
			this->button7->Text = L"07_Saturday";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Aqua;
			this->button6->Location = System::Drawing::Point(464, 51);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(32, 22);
			this->button6->TabIndex = 20;
			this->button6->Text = L"06_Friday";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Aqua;
			this->button5->Location = System::Drawing::Point(371, 51);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 22);
			this->button5->TabIndex = 19;
			this->button5->Text = L"05_Thurusday";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Aqua;
			this->button4->Location = System::Drawing::Point(273, 51);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(32, 22);
			this->button4->TabIndex = 18;
			this->button4->Text = L"04_Wednesday";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Aqua;
			this->button3->Location = System::Drawing::Point(179, 51);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(32, 22);
			this->button3->TabIndex = 17;
			this->button3->Text = L"03_Tuesday";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Aqua;
			this->button2->Location = System::Drawing::Point(91, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 22);
			this->button2->TabIndex = 16;
			this->button2->Text = L"02_Monday";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(9, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(32, 22);
			this->button1->TabIndex = 15;
			this->button1->Text = L"01_Sunday";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label86->ForeColor = System::Drawing::Color::Aqua;
			this->label86->Location = System::Drawing::Point(-27, 35);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(835, 13);
			this->label86->TabIndex = 14;
			this->label86->Text = resources->GetString(L"label86.Text");
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Aqua;
			this->label8->Location = System::Drawing::Point(88, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Monday";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Aqua;
			this->label9->Location = System::Drawing::Point(176, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Tuesday";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Aqua;
			this->label10->Location = System::Drawing::Point(270, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Wednesday";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::Aqua;
			this->label11->Location = System::Drawing::Point(368, 13);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Thurusday";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Aqua;
			this->label12->Location = System::Drawing::Point(542, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Saturday";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Aqua;
			this->label13->Location = System::Drawing::Point(461, 13);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Friday";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::Aqua;
			this->label14->Location = System::Drawing::Point(6, 13);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 13);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Sunday";
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->button32);
			this->tabPage3->Controls->Add(this->button33);
			this->tabPage3->Controls->Add(this->button34);
			this->tabPage3->Controls->Add(this->button35);
			this->tabPage3->Controls->Add(this->button36);
			this->tabPage3->Controls->Add(this->button37);
			this->tabPage3->Controls->Add(this->button38);
			this->tabPage3->Controls->Add(this->button39);
			this->tabPage3->Controls->Add(this->button40);
			this->tabPage3->Controls->Add(this->button41);
			this->tabPage3->Controls->Add(this->button42);
			this->tabPage3->Controls->Add(this->button43);
			this->tabPage3->Controls->Add(this->button44);
			this->tabPage3->Controls->Add(this->button45);
			this->tabPage3->Controls->Add(this->button46);
			this->tabPage3->Controls->Add(this->button47);
			this->tabPage3->Controls->Add(this->button48);
			this->tabPage3->Controls->Add(this->button49);
			this->tabPage3->Controls->Add(this->button50);
			this->tabPage3->Controls->Add(this->button51);
			this->tabPage3->Controls->Add(this->button52);
			this->tabPage3->Controls->Add(this->button53);
			this->tabPage3->Controls->Add(this->button54);
			this->tabPage3->Controls->Add(this->button55);
			this->tabPage3->Controls->Add(this->button56);
			this->tabPage3->Controls->Add(this->button57);
			this->tabPage3->Controls->Add(this->button58);
			this->tabPage3->Controls->Add(this->button59);
			this->tabPage3->Controls->Add(this->label87);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(597, 326);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"February";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->ForeColor = System::Drawing::Color::Aqua;
			this->button32->Location = System::Drawing::Point(179, 248);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(32, 22);
			this->button32->TabIndex = 75;
			this->button32->Text = L"28_Tuesday";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button33
			// 
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->ForeColor = System::Drawing::Color::Aqua;
			this->button33->Location = System::Drawing::Point(91, 248);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(32, 22);
			this->button33->TabIndex = 74;
			this->button33->Text = L"27_Monday";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button34
			// 
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->ForeColor = System::Drawing::Color::Aqua;
			this->button34->Location = System::Drawing::Point(9, 248);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(32, 22);
			this->button34->TabIndex = 73;
			this->button34->Text = L"26_Sunday";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button35
			// 
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->ForeColor = System::Drawing::Color::Aqua;
			this->button35->Location = System::Drawing::Point(545, 201);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(32, 22);
			this->button35->TabIndex = 72;
			this->button35->Text = L"25_Saturday";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button36
			// 
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->ForeColor = System::Drawing::Color::Aqua;
			this->button36->Location = System::Drawing::Point(475, 201);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(32, 22);
			this->button36->TabIndex = 71;
			this->button36->Text = L"24_Friday";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button37
			// 
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button37->ForeColor = System::Drawing::Color::Aqua;
			this->button37->Location = System::Drawing::Point(380, 201);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(32, 22);
			this->button37->TabIndex = 70;
			this->button37->Text = L"23_Thurusday";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button38
			// 
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button38->ForeColor = System::Drawing::Color::Aqua;
			this->button38->Location = System::Drawing::Point(273, 201);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(32, 22);
			this->button38->TabIndex = 69;
			this->button38->Text = L"22_Wednesday";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button39
			// 
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button39->ForeColor = System::Drawing::Color::Aqua;
			this->button39->Location = System::Drawing::Point(179, 201);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(32, 22);
			this->button39->TabIndex = 68;
			this->button39->Text = L"21_Tuesday";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button40
			// 
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button40->ForeColor = System::Drawing::Color::Aqua;
			this->button40->Location = System::Drawing::Point(91, 201);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(32, 22);
			this->button40->TabIndex = 67;
			this->button40->Text = L"20_Monday";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button41
			// 
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button41->ForeColor = System::Drawing::Color::Aqua;
			this->button41->Location = System::Drawing::Point(9, 201);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(32, 22);
			this->button41->TabIndex = 66;
			this->button41->Text = L"19_Sunday";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button42
			// 
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button42->ForeColor = System::Drawing::Color::Aqua;
			this->button42->Location = System::Drawing::Point(545, 152);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(32, 22);
			this->button42->TabIndex = 65;
			this->button42->Text = L"18_Saturday";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button43
			// 
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button43->ForeColor = System::Drawing::Color::Aqua;
			this->button43->Location = System::Drawing::Point(475, 152);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(32, 22);
			this->button43->TabIndex = 64;
			this->button43->Text = L"17_Friday";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button44
			// 
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button44->ForeColor = System::Drawing::Color::Aqua;
			this->button44->Location = System::Drawing::Point(380, 152);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(32, 22);
			this->button44->TabIndex = 63;
			this->button44->Text = L"16_Thurusday";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button45
			// 
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button45->ForeColor = System::Drawing::Color::Aqua;
			this->button45->Location = System::Drawing::Point(273, 152);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(32, 22);
			this->button45->TabIndex = 62;
			this->button45->Text = L"15_Wednesday";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button46
			// 
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button46->ForeColor = System::Drawing::Color::Aqua;
			this->button46->Location = System::Drawing::Point(179, 152);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(32, 22);
			this->button46->TabIndex = 61;
			this->button46->Text = L"14_Tuesday";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button47
			// 
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button47->ForeColor = System::Drawing::Color::Aqua;
			this->button47->Location = System::Drawing::Point(91, 152);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(32, 22);
			this->button47->TabIndex = 60;
			this->button47->Text = L"13_Monday";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button48
			// 
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button48->ForeColor = System::Drawing::Color::Aqua;
			this->button48->Location = System::Drawing::Point(9, 152);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(32, 22);
			this->button48->TabIndex = 46;
			this->button48->Text = L"12_Sunday";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button49
			// 
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button49->ForeColor = System::Drawing::Color::Aqua;
			this->button49->Location = System::Drawing::Point(545, 102);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(32, 22);
			this->button49->TabIndex = 59;
			this->button49->Text = L"11_Saturday";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button50
			// 
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button50->ForeColor = System::Drawing::Color::Aqua;
			this->button50->Location = System::Drawing::Point(475, 102);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(32, 22);
			this->button50->TabIndex = 58;
			this->button50->Text = L"10_Friday";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button51
			// 
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button51->ForeColor = System::Drawing::Color::Aqua;
			this->button51->Location = System::Drawing::Point(380, 102);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(32, 22);
			this->button51->TabIndex = 57;
			this->button51->Text = L"09_Thurusday";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button52
			// 
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button52->ForeColor = System::Drawing::Color::Aqua;
			this->button52->Location = System::Drawing::Point(273, 102);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(32, 22);
			this->button52->TabIndex = 56;
			this->button52->Text = L"08_Wednesday";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button53
			// 
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button53->ForeColor = System::Drawing::Color::Aqua;
			this->button53->Location = System::Drawing::Point(179, 102);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(32, 22);
			this->button53->TabIndex = 55;
			this->button53->Text = L"07_Tuesday";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button54
			// 
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button54->ForeColor = System::Drawing::Color::Aqua;
			this->button54->Location = System::Drawing::Point(91, 102);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(32, 22);
			this->button54->TabIndex = 54;
			this->button54->Text = L"06_Monday";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button55
			// 
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button55->ForeColor = System::Drawing::Color::Aqua;
			this->button55->Location = System::Drawing::Point(9, 102);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(32, 22);
			this->button55->TabIndex = 53;
			this->button55->Text = L"05_Sunday";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button56
			// 
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button56->ForeColor = System::Drawing::Color::Aqua;
			this->button56->Location = System::Drawing::Point(545, 56);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(32, 22);
			this->button56->TabIndex = 52;
			this->button56->Text = L"04_Saturday";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button57
			// 
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button57->ForeColor = System::Drawing::Color::Aqua;
			this->button57->Location = System::Drawing::Point(475, 56);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(32, 22);
			this->button57->TabIndex = 51;
			this->button57->Text = L"03_Friday";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button58
			// 
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button58->ForeColor = System::Drawing::Color::Aqua;
			this->button58->Location = System::Drawing::Point(380, 56);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(32, 22);
			this->button58->TabIndex = 50;
			this->button58->Text = L"02_Thurusday";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button59
			// 
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button59->ForeColor = System::Drawing::Color::Aqua;
			this->button59->Location = System::Drawing::Point(273, 56);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(32, 22);
			this->button59->TabIndex = 49;
			this->button59->Text = L"01_Wednesday";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label87->ForeColor = System::Drawing::Color::Aqua;
			this->label87->Location = System::Drawing::Point(-16, 40);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(835, 13);
			this->label87->TabIndex = 14;
			this->label87->Text = resources->GetString(L"label87.Text");
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Aqua;
			this->label15->Location = System::Drawing::Point(88, 17);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 13);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Monday";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Aqua;
			this->label16->Location = System::Drawing::Point(176, 17);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 13);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Tuesday";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Aqua;
			this->label17->Location = System::Drawing::Point(270, 17);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(73, 13);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Wednesday";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::Aqua;
			this->label18->Location = System::Drawing::Point(377, 17);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(66, 13);
			this->label18->TabIndex = 10;
			this->label18->Text = L"Thurusday";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::Aqua;
			this->label19->Location = System::Drawing::Point(542, 17);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(57, 13);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Saturday";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Aqua;
			this->label20->Location = System::Drawing::Point(472, 17);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Friday";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::Aqua;
			this->label21->Location = System::Drawing::Point(6, 17);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(49, 13);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Sunday";
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage4->Controls->Add(this->button90);
			this->tabPage4->Controls->Add(this->button89);
			this->tabPage4->Controls->Add(this->button88);
			this->tabPage4->Controls->Add(this->button60);
			this->tabPage4->Controls->Add(this->button61);
			this->tabPage4->Controls->Add(this->button62);
			this->tabPage4->Controls->Add(this->button63);
			this->tabPage4->Controls->Add(this->button64);
			this->tabPage4->Controls->Add(this->button65);
			this->tabPage4->Controls->Add(this->button66);
			this->tabPage4->Controls->Add(this->button67);
			this->tabPage4->Controls->Add(this->button68);
			this->tabPage4->Controls->Add(this->button69);
			this->tabPage4->Controls->Add(this->button70);
			this->tabPage4->Controls->Add(this->button71);
			this->tabPage4->Controls->Add(this->button72);
			this->tabPage4->Controls->Add(this->button73);
			this->tabPage4->Controls->Add(this->button74);
			this->tabPage4->Controls->Add(this->button75);
			this->tabPage4->Controls->Add(this->button76);
			this->tabPage4->Controls->Add(this->button77);
			this->tabPage4->Controls->Add(this->button78);
			this->tabPage4->Controls->Add(this->button79);
			this->tabPage4->Controls->Add(this->button80);
			this->tabPage4->Controls->Add(this->button81);
			this->tabPage4->Controls->Add(this->button82);
			this->tabPage4->Controls->Add(this->button83);
			this->tabPage4->Controls->Add(this->button84);
			this->tabPage4->Controls->Add(this->button85);
			this->tabPage4->Controls->Add(this->button86);
			this->tabPage4->Controls->Add(this->button87);
			this->tabPage4->Controls->Add(this->label88);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->label25);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Controls->Add(this->label27);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(597, 326);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"March";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button90
			// 
			this->button90->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button90->ForeColor = System::Drawing::Color::Aqua;
			this->button90->Location = System::Drawing::Point(475, 249);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(32, 22);
			this->button90->TabIndex = 106;
			this->button90->Text = L"31_Friday";
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button89
			// 
			this->button89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button89->ForeColor = System::Drawing::Color::Aqua;
			this->button89->Location = System::Drawing::Point(380, 249);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(32, 22);
			this->button89->TabIndex = 105;
			this->button89->Text = L"30_Thurusday";
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button88
			// 
			this->button88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button88->ForeColor = System::Drawing::Color::Aqua;
			this->button88->Location = System::Drawing::Point(273, 249);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(32, 22);
			this->button88->TabIndex = 104;
			this->button88->Text = L"29_Wednesday";
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button60
			// 
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button60->ForeColor = System::Drawing::Color::Aqua;
			this->button60->Location = System::Drawing::Point(179, 249);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(32, 22);
			this->button60->TabIndex = 103;
			this->button60->Text = L"28_Tuesday";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button61
			// 
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button61->ForeColor = System::Drawing::Color::Aqua;
			this->button61->Location = System::Drawing::Point(91, 249);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(32, 22);
			this->button61->TabIndex = 102;
			this->button61->Text = L"27_Monday";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button62
			// 
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button62->ForeColor = System::Drawing::Color::Aqua;
			this->button62->Location = System::Drawing::Point(9, 249);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(32, 22);
			this->button62->TabIndex = 101;
			this->button62->Text = L"26_Sunday";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button63
			// 
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button63->ForeColor = System::Drawing::Color::Aqua;
			this->button63->Location = System::Drawing::Point(545, 202);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(32, 22);
			this->button63->TabIndex = 100;
			this->button63->Text = L"25_Saturday";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button64
			// 
			this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button64->ForeColor = System::Drawing::Color::Aqua;
			this->button64->Location = System::Drawing::Point(475, 202);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(32, 22);
			this->button64->TabIndex = 99;
			this->button64->Text = L"24_Friday";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button65
			// 
			this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button65->ForeColor = System::Drawing::Color::Aqua;
			this->button65->Location = System::Drawing::Point(380, 202);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(32, 22);
			this->button65->TabIndex = 98;
			this->button65->Text = L"23_Thurusday";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button66
			// 
			this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button66->ForeColor = System::Drawing::Color::Aqua;
			this->button66->Location = System::Drawing::Point(273, 202);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(32, 22);
			this->button66->TabIndex = 97;
			this->button66->Text = L"22_Wednesday";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button67
			// 
			this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button67->ForeColor = System::Drawing::Color::Aqua;
			this->button67->Location = System::Drawing::Point(179, 202);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(32, 22);
			this->button67->TabIndex = 96;
			this->button67->Text = L"21_Tuesday";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button68
			// 
			this->button68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button68->ForeColor = System::Drawing::Color::Aqua;
			this->button68->Location = System::Drawing::Point(91, 202);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(32, 22);
			this->button68->TabIndex = 95;
			this->button68->Text = L"20_Monday";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button69
			// 
			this->button69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button69->ForeColor = System::Drawing::Color::Aqua;
			this->button69->Location = System::Drawing::Point(9, 202);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(32, 22);
			this->button69->TabIndex = 94;
			this->button69->Text = L"19_Sunday";
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button70
			// 
			this->button70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button70->ForeColor = System::Drawing::Color::Aqua;
			this->button70->Location = System::Drawing::Point(545, 153);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(32, 22);
			this->button70->TabIndex = 93;
			this->button70->Text = L"18_Saturday";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button71
			// 
			this->button71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button71->ForeColor = System::Drawing::Color::Aqua;
			this->button71->Location = System::Drawing::Point(475, 153);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(32, 22);
			this->button71->TabIndex = 92;
			this->button71->Text = L"17_Friday";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button72
			// 
			this->button72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button72->ForeColor = System::Drawing::Color::Aqua;
			this->button72->Location = System::Drawing::Point(380, 153);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(32, 22);
			this->button72->TabIndex = 91;
			this->button72->Text = L"16_Thurusday";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button73
			// 
			this->button73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button73->ForeColor = System::Drawing::Color::Aqua;
			this->button73->Location = System::Drawing::Point(273, 153);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(32, 22);
			this->button73->TabIndex = 90;
			this->button73->Text = L"15_Wednesday";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button74
			// 
			this->button74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button74->ForeColor = System::Drawing::Color::Aqua;
			this->button74->Location = System::Drawing::Point(179, 153);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(32, 22);
			this->button74->TabIndex = 89;
			this->button74->Text = L"14_Tuesday";
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button75
			// 
			this->button75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button75->ForeColor = System::Drawing::Color::Aqua;
			this->button75->Location = System::Drawing::Point(91, 153);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(32, 22);
			this->button75->TabIndex = 88;
			this->button75->Text = L"13_Monday";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button76
			// 
			this->button76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button76->ForeColor = System::Drawing::Color::Aqua;
			this->button76->Location = System::Drawing::Point(9, 153);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(32, 22);
			this->button76->TabIndex = 76;
			this->button76->Text = L"12_Sunday";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button77
			// 
			this->button77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button77->ForeColor = System::Drawing::Color::Aqua;
			this->button77->Location = System::Drawing::Point(545, 103);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(32, 22);
			this->button77->TabIndex = 87;
			this->button77->Text = L"11_Saturday";
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button78
			// 
			this->button78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button78->ForeColor = System::Drawing::Color::Aqua;
			this->button78->Location = System::Drawing::Point(475, 103);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(32, 22);
			this->button78->TabIndex = 86;
			this->button78->Text = L"10_Friday";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button79
			// 
			this->button79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button79->ForeColor = System::Drawing::Color::Aqua;
			this->button79->Location = System::Drawing::Point(380, 103);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(32, 22);
			this->button79->TabIndex = 85;
			this->button79->Text = L"09_Thurusday";
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button80
			// 
			this->button80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button80->ForeColor = System::Drawing::Color::Aqua;
			this->button80->Location = System::Drawing::Point(273, 103);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(32, 22);
			this->button80->TabIndex = 84;
			this->button80->Text = L"08_Wednesday";
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button81
			// 
			this->button81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button81->ForeColor = System::Drawing::Color::Aqua;
			this->button81->Location = System::Drawing::Point(179, 103);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(32, 22);
			this->button81->TabIndex = 83;
			this->button81->Text = L"07_Tuesday";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button82
			// 
			this->button82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button82->ForeColor = System::Drawing::Color::Aqua;
			this->button82->Location = System::Drawing::Point(91, 103);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(32, 22);
			this->button82->TabIndex = 82;
			this->button82->Text = L"06_Monday";
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button83
			// 
			this->button83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button83->ForeColor = System::Drawing::Color::Aqua;
			this->button83->Location = System::Drawing::Point(9, 103);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(32, 22);
			this->button83->TabIndex = 81;
			this->button83->Text = L"05_Sunday";
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button84
			// 
			this->button84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button84->ForeColor = System::Drawing::Color::Aqua;
			this->button84->Location = System::Drawing::Point(545, 57);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(32, 22);
			this->button84->TabIndex = 80;
			this->button84->Text = L"04_Saturday";
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button85
			// 
			this->button85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button85->ForeColor = System::Drawing::Color::Aqua;
			this->button85->Location = System::Drawing::Point(475, 57);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(32, 22);
			this->button85->TabIndex = 79;
			this->button85->Text = L"03_Friday";
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button86
			// 
			this->button86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button86->ForeColor = System::Drawing::Color::Aqua;
			this->button86->Location = System::Drawing::Point(380, 57);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(32, 22);
			this->button86->TabIndex = 78;
			this->button86->Text = L"02_Thurusday";
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button87
			// 
			this->button87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button87->ForeColor = System::Drawing::Color::Aqua;
			this->button87->Location = System::Drawing::Point(273, 57);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(32, 22);
			this->button87->TabIndex = 77;
			this->button87->Text = L"01_Wednesday";
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label88->ForeColor = System::Drawing::Color::Aqua;
			this->label88->Location = System::Drawing::Point(-7, 41);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(835, 13);
			this->label88->TabIndex = 14;
			this->label88->Text = resources->GetString(L"label88.Text");
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::Aqua;
			this->label22->Location = System::Drawing::Point(88, 18);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(51, 13);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Monday";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::Aqua;
			this->label23->Location = System::Drawing::Point(176, 18);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(55, 13);
			this->label23->TabIndex = 12;
			this->label23->Text = L"Tuesday";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::Aqua;
			this->label24->Location = System::Drawing::Point(270, 18);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(73, 13);
			this->label24->TabIndex = 11;
			this->label24->Text = L"Wednesday";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::Aqua;
			this->label25->Location = System::Drawing::Point(377, 18);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(66, 13);
			this->label25->TabIndex = 10;
			this->label25->Text = L"Thurusday";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::Aqua;
			this->label26->Location = System::Drawing::Point(542, 18);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(57, 13);
			this->label26->TabIndex = 9;
			this->label26->Text = L"Saturday";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::Color::Aqua;
			this->label27->Location = System::Drawing::Point(472, 18);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 13);
			this->label27->TabIndex = 8;
			this->label27->Text = L"Friday";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::Color::Aqua;
			this->label28->Location = System::Drawing::Point(6, 18);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(49, 13);
			this->label28->TabIndex = 7;
			this->label28->Text = L"Sunday";
			// 
			// tabPage5
			// 
			this->tabPage5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage5.BackgroundImage")));
			this->tabPage5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage5->Controls->Add(this->button120);
			this->tabPage5->Controls->Add(this->button119);
			this->tabPage5->Controls->Add(this->button91);
			this->tabPage5->Controls->Add(this->button92);
			this->tabPage5->Controls->Add(this->button93);
			this->tabPage5->Controls->Add(this->button94);
			this->tabPage5->Controls->Add(this->button95);
			this->tabPage5->Controls->Add(this->button96);
			this->tabPage5->Controls->Add(this->button97);
			this->tabPage5->Controls->Add(this->button98);
			this->tabPage5->Controls->Add(this->button99);
			this->tabPage5->Controls->Add(this->button100);
			this->tabPage5->Controls->Add(this->button101);
			this->tabPage5->Controls->Add(this->button102);
			this->tabPage5->Controls->Add(this->button103);
			this->tabPage5->Controls->Add(this->button104);
			this->tabPage5->Controls->Add(this->button105);
			this->tabPage5->Controls->Add(this->button106);
			this->tabPage5->Controls->Add(this->button107);
			this->tabPage5->Controls->Add(this->button108);
			this->tabPage5->Controls->Add(this->button109);
			this->tabPage5->Controls->Add(this->button110);
			this->tabPage5->Controls->Add(this->button111);
			this->tabPage5->Controls->Add(this->button112);
			this->tabPage5->Controls->Add(this->button113);
			this->tabPage5->Controls->Add(this->button114);
			this->tabPage5->Controls->Add(this->button115);
			this->tabPage5->Controls->Add(this->button116);
			this->tabPage5->Controls->Add(this->button117);
			this->tabPage5->Controls->Add(this->button118);
			this->tabPage5->Controls->Add(this->label89);
			this->tabPage5->Controls->Add(this->label29);
			this->tabPage5->Controls->Add(this->label30);
			this->tabPage5->Controls->Add(this->label31);
			this->tabPage5->Controls->Add(this->label32);
			this->tabPage5->Controls->Add(this->label33);
			this->tabPage5->Controls->Add(this->label34);
			this->tabPage5->Controls->Add(this->label35);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(597, 326);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"April";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button120
			// 
			this->button120->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button120->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button120->ForeColor = System::Drawing::Color::Aqua;
			this->button120->Location = System::Drawing::Point(9, 298);
			this->button120->Name = L"button120";
			this->button120->Size = System::Drawing::Size(32, 22);
			this->button120->TabIndex = 139;
			this->button120->Text = L"30_Sunday";
			this->button120->UseVisualStyleBackColor = true;
			this->button120->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button119
			// 
			this->button119->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button119->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button119->ForeColor = System::Drawing::Color::Aqua;
			this->button119->Location = System::Drawing::Point(545, 251);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(32, 22);
			this->button119->TabIndex = 138;
			this->button119->Text = L"29_Saturday";
			this->button119->UseVisualStyleBackColor = true;
			this->button119->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button91
			// 
			this->button91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button91->ForeColor = System::Drawing::Color::Aqua;
			this->button91->Location = System::Drawing::Point(475, 251);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(32, 22);
			this->button91->TabIndex = 137;
			this->button91->Text = L"28_Friday";
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button92
			// 
			this->button92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button92->ForeColor = System::Drawing::Color::Aqua;
			this->button92->Location = System::Drawing::Point(380, 251);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(32, 22);
			this->button92->TabIndex = 136;
			this->button92->Text = L"27_Thurusday";
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button93
			// 
			this->button93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button93->ForeColor = System::Drawing::Color::Aqua;
			this->button93->Location = System::Drawing::Point(273, 251);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(32, 22);
			this->button93->TabIndex = 135;
			this->button93->Text = L"26_Wednesday";
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button94
			// 
			this->button94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button94->ForeColor = System::Drawing::Color::Aqua;
			this->button94->Location = System::Drawing::Point(179, 251);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(32, 22);
			this->button94->TabIndex = 134;
			this->button94->Text = L"25_Tuesday";
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button95
			// 
			this->button95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button95->ForeColor = System::Drawing::Color::Aqua;
			this->button95->Location = System::Drawing::Point(91, 251);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(32, 22);
			this->button95->TabIndex = 133;
			this->button95->Text = L"24_Monday";
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button96
			// 
			this->button96->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button96->ForeColor = System::Drawing::Color::Aqua;
			this->button96->Location = System::Drawing::Point(9, 251);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(32, 22);
			this->button96->TabIndex = 132;
			this->button96->Text = L"23_Sunday";
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button97
			// 
			this->button97->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button97->ForeColor = System::Drawing::Color::Aqua;
			this->button97->Location = System::Drawing::Point(545, 204);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(32, 22);
			this->button97->TabIndex = 131;
			this->button97->Text = L"22_Saturday";
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button98
			// 
			this->button98->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button98->ForeColor = System::Drawing::Color::Aqua;
			this->button98->Location = System::Drawing::Point(475, 204);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(32, 22);
			this->button98->TabIndex = 130;
			this->button98->Text = L"21_Friday";
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button99
			// 
			this->button99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button99->ForeColor = System::Drawing::Color::Aqua;
			this->button99->Location = System::Drawing::Point(380, 204);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(32, 22);
			this->button99->TabIndex = 129;
			this->button99->Text = L"20_Thurusday";
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button100
			// 
			this->button100->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button100->ForeColor = System::Drawing::Color::Aqua;
			this->button100->Location = System::Drawing::Point(273, 204);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(32, 22);
			this->button100->TabIndex = 128;
			this->button100->Text = L"19_Wednesday";
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button101
			// 
			this->button101->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button101->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button101->ForeColor = System::Drawing::Color::Aqua;
			this->button101->Location = System::Drawing::Point(179, 204);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(32, 22);
			this->button101->TabIndex = 127;
			this->button101->Text = L"18_Tuesday";
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button102
			// 
			this->button102->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button102->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button102->ForeColor = System::Drawing::Color::Aqua;
			this->button102->Location = System::Drawing::Point(91, 204);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(32, 22);
			this->button102->TabIndex = 126;
			this->button102->Text = L"17_Monday";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button103
			// 
			this->button103->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button103->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button103->ForeColor = System::Drawing::Color::Aqua;
			this->button103->Location = System::Drawing::Point(9, 204);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(32, 22);
			this->button103->TabIndex = 125;
			this->button103->Text = L"16_Sunday";
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button104
			// 
			this->button104->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button104->ForeColor = System::Drawing::Color::Aqua;
			this->button104->Location = System::Drawing::Point(545, 155);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(32, 22);
			this->button104->TabIndex = 124;
			this->button104->Text = L"15_Saturday";
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button105
			// 
			this->button105->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button105->ForeColor = System::Drawing::Color::Aqua;
			this->button105->Location = System::Drawing::Point(475, 155);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(32, 22);
			this->button105->TabIndex = 123;
			this->button105->Text = L"14_Friday";
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button106
			// 
			this->button106->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button106->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button106->ForeColor = System::Drawing::Color::Aqua;
			this->button106->Location = System::Drawing::Point(380, 155);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(32, 22);
			this->button106->TabIndex = 122;
			this->button106->Text = L"13_Thurusday";
			this->button106->UseVisualStyleBackColor = true;
			this->button106->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button107
			// 
			this->button107->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button107->ForeColor = System::Drawing::Color::Aqua;
			this->button107->Location = System::Drawing::Point(273, 155);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(32, 22);
			this->button107->TabIndex = 121;
			this->button107->Text = L"12_Wednesday";
			this->button107->UseVisualStyleBackColor = true;
			this->button107->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button108
			// 
			this->button108->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button108->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button108->ForeColor = System::Drawing::Color::Aqua;
			this->button108->Location = System::Drawing::Point(179, 155);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(32, 22);
			this->button108->TabIndex = 120;
			this->button108->Text = L"11_Tuesday";
			this->button108->UseVisualStyleBackColor = true;
			this->button108->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button109
			// 
			this->button109->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button109->ForeColor = System::Drawing::Color::Aqua;
			this->button109->Location = System::Drawing::Point(91, 155);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(32, 22);
			this->button109->TabIndex = 119;
			this->button109->Text = L"10_Monday";
			this->button109->UseVisualStyleBackColor = true;
			this->button109->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button110
			// 
			this->button110->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button110->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button110->ForeColor = System::Drawing::Color::Aqua;
			this->button110->Location = System::Drawing::Point(9, 155);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(32, 22);
			this->button110->TabIndex = 107;
			this->button110->Text = L"09_Sunday";
			this->button110->UseVisualStyleBackColor = true;
			this->button110->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button111
			// 
			this->button111->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button111->ForeColor = System::Drawing::Color::Aqua;
			this->button111->Location = System::Drawing::Point(545, 105);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(32, 22);
			this->button111->TabIndex = 118;
			this->button111->Text = L"08_Saturday";
			this->button111->UseVisualStyleBackColor = true;
			this->button111->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button112
			// 
			this->button112->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button112->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button112->ForeColor = System::Drawing::Color::Aqua;
			this->button112->Location = System::Drawing::Point(475, 105);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(32, 22);
			this->button112->TabIndex = 117;
			this->button112->Text = L"07_Friday";
			this->button112->UseVisualStyleBackColor = true;
			this->button112->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button113
			// 
			this->button113->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button113->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button113->ForeColor = System::Drawing::Color::Aqua;
			this->button113->Location = System::Drawing::Point(380, 105);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(32, 22);
			this->button113->TabIndex = 116;
			this->button113->Text = L"06_Thurusday";
			this->button113->UseVisualStyleBackColor = true;
			this->button113->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button114
			// 
			this->button114->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button114->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button114->ForeColor = System::Drawing::Color::Aqua;
			this->button114->Location = System::Drawing::Point(273, 105);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(32, 22);
			this->button114->TabIndex = 115;
			this->button114->Text = L"05_Wednesday";
			this->button114->UseVisualStyleBackColor = true;
			this->button114->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button115
			// 
			this->button115->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button115->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button115->ForeColor = System::Drawing::Color::Aqua;
			this->button115->Location = System::Drawing::Point(179, 105);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(32, 22);
			this->button115->TabIndex = 114;
			this->button115->Text = L"04_Tuesday";
			this->button115->UseVisualStyleBackColor = true;
			this->button115->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button116
			// 
			this->button116->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button116->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button116->ForeColor = System::Drawing::Color::Aqua;
			this->button116->Location = System::Drawing::Point(91, 105);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(32, 22);
			this->button116->TabIndex = 113;
			this->button116->Text = L"03_Monday";
			this->button116->UseVisualStyleBackColor = true;
			this->button116->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button117
			// 
			this->button117->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button117->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button117->ForeColor = System::Drawing::Color::Aqua;
			this->button117->Location = System::Drawing::Point(9, 105);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(32, 22);
			this->button117->TabIndex = 112;
			this->button117->Text = L"02_Sunday";
			this->button117->UseVisualStyleBackColor = true;
			this->button117->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button118
			// 
			this->button118->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button118->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button118->ForeColor = System::Drawing::Color::Aqua;
			this->button118->Location = System::Drawing::Point(545, 59);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(32, 22);
			this->button118->TabIndex = 111;
			this->button118->Text = L"01_Saturday";
			this->button118->UseVisualStyleBackColor = true;
			this->button118->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label89->ForeColor = System::Drawing::Color::Aqua;
			this->label89->Location = System::Drawing::Point(-7, 43);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(835, 13);
			this->label89->TabIndex = 14;
			this->label89->Text = resources->GetString(L"label89.Text");
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::Color::Aqua;
			this->label29->Location = System::Drawing::Point(88, 20);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(51, 13);
			this->label29->TabIndex = 13;
			this->label29->Text = L"Monday";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::Color::Aqua;
			this->label30->Location = System::Drawing::Point(176, 20);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(55, 13);
			this->label30->TabIndex = 12;
			this->label30->Text = L"Tuesday";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::Color::Aqua;
			this->label31->Location = System::Drawing::Point(270, 20);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(73, 13);
			this->label31->TabIndex = 11;
			this->label31->Text = L"Wednesday";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->ForeColor = System::Drawing::Color::Aqua;
			this->label32->Location = System::Drawing::Point(377, 20);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(66, 13);
			this->label32->TabIndex = 10;
			this->label32->Text = L"Thurusday";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->ForeColor = System::Drawing::Color::Aqua;
			this->label33->Location = System::Drawing::Point(542, 20);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(57, 13);
			this->label33->TabIndex = 9;
			this->label33->Text = L"Saturday";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->ForeColor = System::Drawing::Color::Aqua;
			this->label34->Location = System::Drawing::Point(472, 20);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 13);
			this->label34->TabIndex = 8;
			this->label34->Text = L"Friday";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->ForeColor = System::Drawing::Color::Aqua;
			this->label35->Location = System::Drawing::Point(6, 20);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(49, 13);
			this->label35->TabIndex = 7;
			this->label35->Text = L"Sunday";
			// 
			// tabPage6
			// 
			this->tabPage6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage6.BackgroundImage")));
			this->tabPage6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage6->Controls->Add(this->button145);
			this->tabPage6->Controls->Add(this->button138);
			this->tabPage6->Controls->Add(this->button131);
			this->tabPage6->Controls->Add(this->button124);
			this->tabPage6->Controls->Add(this->button121);
			this->tabPage6->Controls->Add(this->button122);
			this->tabPage6->Controls->Add(this->button123);
			this->tabPage6->Controls->Add(this->button125);
			this->tabPage6->Controls->Add(this->button126);
			this->tabPage6->Controls->Add(this->button127);
			this->tabPage6->Controls->Add(this->button128);
			this->tabPage6->Controls->Add(this->button129);
			this->tabPage6->Controls->Add(this->button130);
			this->tabPage6->Controls->Add(this->button132);
			this->tabPage6->Controls->Add(this->button133);
			this->tabPage6->Controls->Add(this->button134);
			this->tabPage6->Controls->Add(this->button135);
			this->tabPage6->Controls->Add(this->button136);
			this->tabPage6->Controls->Add(this->button137);
			this->tabPage6->Controls->Add(this->button139);
			this->tabPage6->Controls->Add(this->button140);
			this->tabPage6->Controls->Add(this->button141);
			this->tabPage6->Controls->Add(this->button142);
			this->tabPage6->Controls->Add(this->button143);
			this->tabPage6->Controls->Add(this->button144);
			this->tabPage6->Controls->Add(this->button146);
			this->tabPage6->Controls->Add(this->button147);
			this->tabPage6->Controls->Add(this->button148);
			this->tabPage6->Controls->Add(this->button149);
			this->tabPage6->Controls->Add(this->button150);
			this->tabPage6->Controls->Add(this->button151);
			this->tabPage6->Controls->Add(this->label90);
			this->tabPage6->Controls->Add(this->label36);
			this->tabPage6->Controls->Add(this->label37);
			this->tabPage6->Controls->Add(this->label38);
			this->tabPage6->Controls->Add(this->label39);
			this->tabPage6->Controls->Add(this->label40);
			this->tabPage6->Controls->Add(this->label41);
			this->tabPage6->Controls->Add(this->label42);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(597, 326);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"May";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button145
			// 
			this->button145->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button145->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button145->ForeColor = System::Drawing::Color::Aqua;
			this->button145->Location = System::Drawing::Point(9, 248);
			this->button145->Name = L"button145";
			this->button145->Size = System::Drawing::Size(32, 22);
			this->button145->TabIndex = 79;
			this->button145->Text = L"28_Sunday";
			this->button145->UseVisualStyleBackColor = true;
			this->button145->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button138
			// 
			this->button138->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button138->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button138->ForeColor = System::Drawing::Color::Aqua;
			this->button138->Location = System::Drawing::Point(9, 201);
			this->button138->Name = L"button138";
			this->button138->Size = System::Drawing::Size(32, 22);
			this->button138->TabIndex = 78;
			this->button138->Text = L"21_Sunday";
			this->button138->UseVisualStyleBackColor = true;
			this->button138->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button131
			// 
			this->button131->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button131->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button131->ForeColor = System::Drawing::Color::Aqua;
			this->button131->Location = System::Drawing::Point(9, 152);
			this->button131->Name = L"button131";
			this->button131->Size = System::Drawing::Size(32, 22);
			this->button131->TabIndex = 77;
			this->button131->Text = L"14_Sunday";
			this->button131->UseVisualStyleBackColor = true;
			this->button131->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button124
			// 
			this->button124->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button124->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button124->ForeColor = System::Drawing::Color::Aqua;
			this->button124->Location = System::Drawing::Point(9, 102);
			this->button124->Name = L"button124";
			this->button124->Size = System::Drawing::Size(32, 22);
			this->button124->TabIndex = 76;
			this->button124->Text = L"07_Sunday";
			this->button124->UseVisualStyleBackColor = true;
			this->button124->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button121
			// 
			this->button121->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button121->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button121->ForeColor = System::Drawing::Color::Aqua;
			this->button121->Location = System::Drawing::Point(273, 248);
			this->button121->Name = L"button121";
			this->button121->Size = System::Drawing::Size(32, 22);
			this->button121->TabIndex = 75;
			this->button121->Text = L"31_Wednesday";
			this->button121->UseVisualStyleBackColor = true;
			this->button121->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button122
			// 
			this->button122->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button122->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button122->ForeColor = System::Drawing::Color::Aqua;
			this->button122->Location = System::Drawing::Point(179, 248);
			this->button122->Name = L"button122";
			this->button122->Size = System::Drawing::Size(32, 22);
			this->button122->TabIndex = 74;
			this->button122->Text = L"30_Tuesday";
			this->button122->UseVisualStyleBackColor = true;
			this->button122->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button123
			// 
			this->button123->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button123->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button123->ForeColor = System::Drawing::Color::Aqua;
			this->button123->Location = System::Drawing::Point(91, 248);
			this->button123->Name = L"button123";
			this->button123->Size = System::Drawing::Size(32, 22);
			this->button123->TabIndex = 73;
			this->button123->Text = L"29_Monday";
			this->button123->UseVisualStyleBackColor = true;
			this->button123->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button125
			// 
			this->button125->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button125->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button125->ForeColor = System::Drawing::Color::Aqua;
			this->button125->Location = System::Drawing::Point(546, 201);
			this->button125->Name = L"button125";
			this->button125->Size = System::Drawing::Size(32, 22);
			this->button125->TabIndex = 71;
			this->button125->Text = L"27_Saturday";
			this->button125->UseVisualStyleBackColor = true;
			this->button125->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button126
			// 
			this->button126->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button126->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button126->ForeColor = System::Drawing::Color::Aqua;
			this->button126->Location = System::Drawing::Point(475, 201);
			this->button126->Name = L"button126";
			this->button126->Size = System::Drawing::Size(32, 22);
			this->button126->TabIndex = 70;
			this->button126->Text = L"26_Friday";
			this->button126->UseVisualStyleBackColor = true;
			this->button126->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button127
			// 
			this->button127->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button127->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button127->ForeColor = System::Drawing::Color::Aqua;
			this->button127->Location = System::Drawing::Point(380, 201);
			this->button127->Name = L"button127";
			this->button127->Size = System::Drawing::Size(32, 22);
			this->button127->TabIndex = 69;
			this->button127->Text = L"25_Thurusday";
			this->button127->UseVisualStyleBackColor = true;
			this->button127->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button128
			// 
			this->button128->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button128->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button128->ForeColor = System::Drawing::Color::Aqua;
			this->button128->Location = System::Drawing::Point(273, 201);
			this->button128->Name = L"button128";
			this->button128->Size = System::Drawing::Size(32, 22);
			this->button128->TabIndex = 68;
			this->button128->Text = L"24_Wednesday";
			this->button128->UseVisualStyleBackColor = true;
			this->button128->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button129
			// 
			this->button129->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button129->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button129->ForeColor = System::Drawing::Color::Aqua;
			this->button129->Location = System::Drawing::Point(179, 201);
			this->button129->Name = L"button129";
			this->button129->Size = System::Drawing::Size(32, 22);
			this->button129->TabIndex = 67;
			this->button129->Text = L"23_Tuesday";
			this->button129->UseVisualStyleBackColor = true;
			this->button129->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button130
			// 
			this->button130->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button130->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button130->ForeColor = System::Drawing::Color::Aqua;
			this->button130->Location = System::Drawing::Point(91, 201);
			this->button130->Name = L"button130";
			this->button130->Size = System::Drawing::Size(32, 22);
			this->button130->TabIndex = 66;
			this->button130->Text = L"22_Monday";
			this->button130->UseVisualStyleBackColor = true;
			this->button130->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button132
			// 
			this->button132->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button132->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button132->ForeColor = System::Drawing::Color::Aqua;
			this->button132->Location = System::Drawing::Point(546, 152);
			this->button132->Name = L"button132";
			this->button132->Size = System::Drawing::Size(32, 22);
			this->button132->TabIndex = 64;
			this->button132->Text = L"20_Saturday";
			this->button132->UseVisualStyleBackColor = true;
			this->button132->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button133
			// 
			this->button133->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button133->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button133->ForeColor = System::Drawing::Color::Aqua;
			this->button133->Location = System::Drawing::Point(475, 152);
			this->button133->Name = L"button133";
			this->button133->Size = System::Drawing::Size(32, 22);
			this->button133->TabIndex = 63;
			this->button133->Text = L"19_Friday";
			this->button133->UseVisualStyleBackColor = true;
			this->button133->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button134
			// 
			this->button134->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button134->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button134->ForeColor = System::Drawing::Color::Aqua;
			this->button134->Location = System::Drawing::Point(380, 152);
			this->button134->Name = L"button134";
			this->button134->Size = System::Drawing::Size(32, 22);
			this->button134->TabIndex = 62;
			this->button134->Text = L"18_Thurusday";
			this->button134->UseVisualStyleBackColor = true;
			this->button134->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button135
			// 
			this->button135->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button135->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button135->ForeColor = System::Drawing::Color::Aqua;
			this->button135->Location = System::Drawing::Point(273, 152);
			this->button135->Name = L"button135";
			this->button135->Size = System::Drawing::Size(32, 22);
			this->button135->TabIndex = 61;
			this->button135->Text = L"17_Wednesday";
			this->button135->UseVisualStyleBackColor = true;
			this->button135->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button136
			// 
			this->button136->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button136->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button136->ForeColor = System::Drawing::Color::Aqua;
			this->button136->Location = System::Drawing::Point(179, 152);
			this->button136->Name = L"button136";
			this->button136->Size = System::Drawing::Size(32, 22);
			this->button136->TabIndex = 60;
			this->button136->Text = L"16_Tuesday";
			this->button136->UseVisualStyleBackColor = true;
			this->button136->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button137
			// 
			this->button137->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button137->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button137->ForeColor = System::Drawing::Color::Aqua;
			this->button137->Location = System::Drawing::Point(91, 152);
			this->button137->Name = L"button137";
			this->button137->Size = System::Drawing::Size(32, 22);
			this->button137->TabIndex = 46;
			this->button137->Text = L"15_Monday";
			this->button137->UseVisualStyleBackColor = true;
			this->button137->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button139
			// 
			this->button139->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button139->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button139->ForeColor = System::Drawing::Color::Aqua;
			this->button139->Location = System::Drawing::Point(546, 102);
			this->button139->Name = L"button139";
			this->button139->Size = System::Drawing::Size(32, 22);
			this->button139->TabIndex = 58;
			this->button139->Text = L"13_Saturday";
			this->button139->UseVisualStyleBackColor = true;
			this->button139->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button140
			// 
			this->button140->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button140->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button140->ForeColor = System::Drawing::Color::Aqua;
			this->button140->Location = System::Drawing::Point(475, 102);
			this->button140->Name = L"button140";
			this->button140->Size = System::Drawing::Size(32, 22);
			this->button140->TabIndex = 57;
			this->button140->Text = L"12_Friday";
			this->button140->UseVisualStyleBackColor = true;
			this->button140->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button141
			// 
			this->button141->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button141->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button141->ForeColor = System::Drawing::Color::Aqua;
			this->button141->Location = System::Drawing::Point(380, 102);
			this->button141->Name = L"button141";
			this->button141->Size = System::Drawing::Size(32, 22);
			this->button141->TabIndex = 56;
			this->button141->Text = L"11_Thurusday";
			this->button141->UseVisualStyleBackColor = true;
			this->button141->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button142
			// 
			this->button142->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button142->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button142->ForeColor = System::Drawing::Color::Aqua;
			this->button142->Location = System::Drawing::Point(273, 102);
			this->button142->Name = L"button142";
			this->button142->Size = System::Drawing::Size(32, 22);
			this->button142->TabIndex = 55;
			this->button142->Text = L"10_Wednesday";
			this->button142->UseVisualStyleBackColor = true;
			this->button142->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button143
			// 
			this->button143->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button143->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button143->ForeColor = System::Drawing::Color::Aqua;
			this->button143->Location = System::Drawing::Point(179, 102);
			this->button143->Name = L"button143";
			this->button143->Size = System::Drawing::Size(32, 22);
			this->button143->TabIndex = 54;
			this->button143->Text = L"09_Tuesday";
			this->button143->UseVisualStyleBackColor = true;
			this->button143->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button144
			// 
			this->button144->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button144->ForeColor = System::Drawing::Color::Aqua;
			this->button144->Location = System::Drawing::Point(91, 102);
			this->button144->Name = L"button144";
			this->button144->Size = System::Drawing::Size(32, 22);
			this->button144->TabIndex = 53;
			this->button144->Text = L"08_Monday";
			this->button144->UseVisualStyleBackColor = true;
			this->button144->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button146
			// 
			this->button146->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button146->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button146->ForeColor = System::Drawing::Color::Aqua;
			this->button146->Location = System::Drawing::Point(546, 56);
			this->button146->Name = L"button146";
			this->button146->Size = System::Drawing::Size(32, 22);
			this->button146->TabIndex = 51;
			this->button146->Text = L"06_Saturday";
			this->button146->UseVisualStyleBackColor = true;
			this->button146->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button147
			// 
			this->button147->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button147->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button147->ForeColor = System::Drawing::Color::Aqua;
			this->button147->Location = System::Drawing::Point(475, 56);
			this->button147->Name = L"button147";
			this->button147->Size = System::Drawing::Size(32, 22);
			this->button147->TabIndex = 50;
			this->button147->Text = L"05_Friday";
			this->button147->UseVisualStyleBackColor = true;
			this->button147->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button148
			// 
			this->button148->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button148->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button148->ForeColor = System::Drawing::Color::Aqua;
			this->button148->Location = System::Drawing::Point(380, 56);
			this->button148->Name = L"button148";
			this->button148->Size = System::Drawing::Size(32, 22);
			this->button148->TabIndex = 49;
			this->button148->Text = L"04_Thurusday";
			this->button148->UseVisualStyleBackColor = true;
			this->button148->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button149
			// 
			this->button149->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button149->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button149->ForeColor = System::Drawing::Color::Aqua;
			this->button149->Location = System::Drawing::Point(273, 56);
			this->button149->Name = L"button149";
			this->button149->Size = System::Drawing::Size(32, 22);
			this->button149->TabIndex = 48;
			this->button149->Text = L"03_Wednesday";
			this->button149->UseVisualStyleBackColor = true;
			this->button149->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button150
			// 
			this->button150->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button150->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button150->ForeColor = System::Drawing::Color::Aqua;
			this->button150->Location = System::Drawing::Point(179, 56);
			this->button150->Name = L"button150";
			this->button150->Size = System::Drawing::Size(32, 22);
			this->button150->TabIndex = 47;
			this->button150->Text = L"02_Tuesday";
			this->button150->UseVisualStyleBackColor = true;
			this->button150->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button151
			// 
			this->button151->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button151->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button151->ForeColor = System::Drawing::Color::Aqua;
			this->button151->Location = System::Drawing::Point(91, 56);
			this->button151->Name = L"button151";
			this->button151->Size = System::Drawing::Size(32, 22);
			this->button151->TabIndex = 45;
			this->button151->Text = L"01_Monday";
			this->button151->UseVisualStyleBackColor = true;
			this->button151->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label90->ForeColor = System::Drawing::Color::Aqua;
			this->label90->Location = System::Drawing::Point(-18, 40);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(835, 13);
			this->label90->TabIndex = 14;
			this->label90->Text = resources->GetString(L"label90.Text");
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->ForeColor = System::Drawing::Color::Aqua;
			this->label36->Location = System::Drawing::Point(88, 16);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(51, 13);
			this->label36->TabIndex = 13;
			this->label36->Text = L"Monday";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::Color::Aqua;
			this->label37->Location = System::Drawing::Point(176, 16);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(55, 13);
			this->label37->TabIndex = 12;
			this->label37->Text = L"Tuesday";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->ForeColor = System::Drawing::Color::Aqua;
			this->label38->Location = System::Drawing::Point(270, 16);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(73, 13);
			this->label38->TabIndex = 11;
			this->label38->Text = L"Wednesday";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->ForeColor = System::Drawing::Color::Aqua;
			this->label39->Location = System::Drawing::Point(377, 16);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(66, 13);
			this->label39->TabIndex = 10;
			this->label39->Text = L"Thurusday";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->ForeColor = System::Drawing::Color::Aqua;
			this->label40->Location = System::Drawing::Point(542, 16);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(57, 13);
			this->label40->TabIndex = 9;
			this->label40->Text = L"Saturday";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->ForeColor = System::Drawing::Color::Aqua;
			this->label41->Location = System::Drawing::Point(472, 16);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(41, 13);
			this->label41->TabIndex = 8;
			this->label41->Text = L"Friday";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->ForeColor = System::Drawing::Color::Aqua;
			this->label42->Location = System::Drawing::Point(6, 16);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(49, 13);
			this->label42->TabIndex = 7;
			this->label42->Text = L"Sunday";
			// 
			// tabPage7
			// 
			this->tabPage7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage7.BackgroundImage")));
			this->tabPage7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage7->Controls->Add(this->button185);
			this->tabPage7->Controls->Add(this->button184);
			this->tabPage7->Controls->Add(this->button183);
			this->tabPage7->Controls->Add(this->button182);
			this->tabPage7->Controls->Add(this->button181);
			this->tabPage7->Controls->Add(this->button180);
			this->tabPage7->Controls->Add(this->button152);
			this->tabPage7->Controls->Add(this->button153);
			this->tabPage7->Controls->Add(this->button154);
			this->tabPage7->Controls->Add(this->button155);
			this->tabPage7->Controls->Add(this->button156);
			this->tabPage7->Controls->Add(this->button157);
			this->tabPage7->Controls->Add(this->button158);
			this->tabPage7->Controls->Add(this->button159);
			this->tabPage7->Controls->Add(this->button160);
			this->tabPage7->Controls->Add(this->button161);
			this->tabPage7->Controls->Add(this->button162);
			this->tabPage7->Controls->Add(this->button163);
			this->tabPage7->Controls->Add(this->button164);
			this->tabPage7->Controls->Add(this->button165);
			this->tabPage7->Controls->Add(this->button166);
			this->tabPage7->Controls->Add(this->button167);
			this->tabPage7->Controls->Add(this->button168);
			this->tabPage7->Controls->Add(this->button169);
			this->tabPage7->Controls->Add(this->button170);
			this->tabPage7->Controls->Add(this->button171);
			this->tabPage7->Controls->Add(this->button172);
			this->tabPage7->Controls->Add(this->button173);
			this->tabPage7->Controls->Add(this->button174);
			this->tabPage7->Controls->Add(this->button175);
			this->tabPage7->Controls->Add(this->button176);
			this->tabPage7->Controls->Add(this->button177);
			this->tabPage7->Controls->Add(this->button178);
			this->tabPage7->Controls->Add(this->button179);
			this->tabPage7->Controls->Add(this->label91);
			this->tabPage7->Controls->Add(this->label43);
			this->tabPage7->Controls->Add(this->label44);
			this->tabPage7->Controls->Add(this->label45);
			this->tabPage7->Controls->Add(this->label46);
			this->tabPage7->Controls->Add(this->label47);
			this->tabPage7->Controls->Add(this->label48);
			this->tabPage7->Controls->Add(this->label49);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(597, 326);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"June";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button185
			// 
			this->button185->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button185->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button185->ForeColor = System::Drawing::Color::Aqua;
			this->button185->Location = System::Drawing::Point(475, 252);
			this->button185->Name = L"button185";
			this->button185->Size = System::Drawing::Size(32, 22);
			this->button185->TabIndex = 109;
			this->button185->Text = L"30_Friday";
			this->button185->UseVisualStyleBackColor = true;
			this->button185->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button184
			// 
			this->button184->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button184->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button184->ForeColor = System::Drawing::Color::Aqua;
			this->button184->Location = System::Drawing::Point(380, 252);
			this->button184->Name = L"button184";
			this->button184->Size = System::Drawing::Size(32, 22);
			this->button184->TabIndex = 108;
			this->button184->Text = L"29_Thurusday";
			this->button184->UseVisualStyleBackColor = true;
			this->button184->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button183
			// 
			this->button183->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button183->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button183->ForeColor = System::Drawing::Color::Aqua;
			this->button183->Location = System::Drawing::Point(9, 252);
			this->button183->Name = L"button183";
			this->button183->Size = System::Drawing::Size(32, 22);
			this->button183->TabIndex = 107;
			this->button183->Text = L"25_Sunday";
			this->button183->UseVisualStyleBackColor = true;
			this->button183->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button182
			// 
			this->button182->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button182->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button182->ForeColor = System::Drawing::Color::Aqua;
			this->button182->Location = System::Drawing::Point(9, 205);
			this->button182->Name = L"button182";
			this->button182->Size = System::Drawing::Size(32, 22);
			this->button182->TabIndex = 106;
			this->button182->Text = L"18_Sunday";
			this->button182->UseVisualStyleBackColor = true;
			this->button182->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button181
			// 
			this->button181->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button181->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button181->ForeColor = System::Drawing::Color::Aqua;
			this->button181->Location = System::Drawing::Point(9, 156);
			this->button181->Name = L"button181";
			this->button181->Size = System::Drawing::Size(32, 22);
			this->button181->TabIndex = 105;
			this->button181->Text = L"11_Sunday";
			this->button181->UseVisualStyleBackColor = true;
			this->button181->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button180
			// 
			this->button180->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button180->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button180->ForeColor = System::Drawing::Color::Aqua;
			this->button180->Location = System::Drawing::Point(9, 106);
			this->button180->Name = L"button180";
			this->button180->Size = System::Drawing::Size(32, 22);
			this->button180->TabIndex = 104;
			this->button180->Text = L"04_Sunday";
			this->button180->UseVisualStyleBackColor = true;
			this->button180->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button152
			// 
			this->button152->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button152->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button152->ForeColor = System::Drawing::Color::Aqua;
			this->button152->Location = System::Drawing::Point(273, 252);
			this->button152->Name = L"button152";
			this->button152->Size = System::Drawing::Size(32, 22);
			this->button152->TabIndex = 103;
			this->button152->Text = L"28_Wednesday";
			this->button152->UseVisualStyleBackColor = true;
			this->button152->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button153
			// 
			this->button153->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button153->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button153->ForeColor = System::Drawing::Color::Aqua;
			this->button153->Location = System::Drawing::Point(179, 252);
			this->button153->Name = L"button153";
			this->button153->Size = System::Drawing::Size(32, 22);
			this->button153->TabIndex = 102;
			this->button153->Text = L"27_Tuesday";
			this->button153->UseVisualStyleBackColor = true;
			this->button153->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button154
			// 
			this->button154->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button154->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button154->ForeColor = System::Drawing::Color::Aqua;
			this->button154->Location = System::Drawing::Point(91, 252);
			this->button154->Name = L"button154";
			this->button154->Size = System::Drawing::Size(32, 22);
			this->button154->TabIndex = 101;
			this->button154->Text = L"26_Monday";
			this->button154->UseVisualStyleBackColor = true;
			this->button154->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button155
			// 
			this->button155->Location = System::Drawing::Point(652, 205);
			this->button155->Name = L"button155";
			this->button155->Size = System::Drawing::Size(32, 22);
			this->button155->TabIndex = 100;
			this->button155->Text = L"25";
			this->button155->UseVisualStyleBackColor = true;
			// 
			// button156
			// 
			this->button156->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button156->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button156->ForeColor = System::Drawing::Color::Aqua;
			this->button156->Location = System::Drawing::Point(545, 205);
			this->button156->Name = L"button156";
			this->button156->Size = System::Drawing::Size(32, 22);
			this->button156->TabIndex = 99;
			this->button156->Text = L"24_Saturday";
			this->button156->UseVisualStyleBackColor = true;
			this->button156->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button157
			// 
			this->button157->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button157->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button157->ForeColor = System::Drawing::Color::Aqua;
			this->button157->Location = System::Drawing::Point(475, 205);
			this->button157->Name = L"button157";
			this->button157->Size = System::Drawing::Size(32, 22);
			this->button157->TabIndex = 98;
			this->button157->Text = L"23_Friday";
			this->button157->UseVisualStyleBackColor = true;
			this->button157->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button158
			// 
			this->button158->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button158->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button158->ForeColor = System::Drawing::Color::Aqua;
			this->button158->Location = System::Drawing::Point(380, 205);
			this->button158->Name = L"button158";
			this->button158->Size = System::Drawing::Size(32, 22);
			this->button158->TabIndex = 97;
			this->button158->Text = L"22_Thurusday";
			this->button158->UseVisualStyleBackColor = true;
			this->button158->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button159
			// 
			this->button159->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button159->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button159->ForeColor = System::Drawing::Color::Aqua;
			this->button159->Location = System::Drawing::Point(273, 205);
			this->button159->Name = L"button159";
			this->button159->Size = System::Drawing::Size(32, 22);
			this->button159->TabIndex = 96;
			this->button159->Text = L"21_Wednesday";
			this->button159->UseVisualStyleBackColor = true;
			this->button159->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button160
			// 
			this->button160->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button160->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button160->ForeColor = System::Drawing::Color::Aqua;
			this->button160->Location = System::Drawing::Point(179, 205);
			this->button160->Name = L"button160";
			this->button160->Size = System::Drawing::Size(32, 22);
			this->button160->TabIndex = 95;
			this->button160->Text = L"20_Tuesday";
			this->button160->UseVisualStyleBackColor = true;
			this->button160->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button161
			// 
			this->button161->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button161->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button161->ForeColor = System::Drawing::Color::Aqua;
			this->button161->Location = System::Drawing::Point(91, 205);
			this->button161->Name = L"button161";
			this->button161->Size = System::Drawing::Size(32, 22);
			this->button161->TabIndex = 94;
			this->button161->Text = L"19_Monday";
			this->button161->UseVisualStyleBackColor = true;
			this->button161->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button162
			// 
			this->button162->Location = System::Drawing::Point(652, 156);
			this->button162->Name = L"button162";
			this->button162->Size = System::Drawing::Size(32, 22);
			this->button162->TabIndex = 93;
			this->button162->Text = L"18";
			this->button162->UseVisualStyleBackColor = true;
			// 
			// button163
			// 
			this->button163->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button163->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button163->ForeColor = System::Drawing::Color::Aqua;
			this->button163->Location = System::Drawing::Point(545, 156);
			this->button163->Name = L"button163";
			this->button163->Size = System::Drawing::Size(32, 22);
			this->button163->TabIndex = 92;
			this->button163->Text = L"17_Saturday";
			this->button163->UseVisualStyleBackColor = true;
			this->button163->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button164
			// 
			this->button164->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button164->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button164->ForeColor = System::Drawing::Color::Aqua;
			this->button164->Location = System::Drawing::Point(475, 156);
			this->button164->Name = L"button164";
			this->button164->Size = System::Drawing::Size(32, 22);
			this->button164->TabIndex = 91;
			this->button164->Text = L"16_Friday";
			this->button164->UseVisualStyleBackColor = true;
			this->button164->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button165
			// 
			this->button165->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button165->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button165->ForeColor = System::Drawing::Color::Aqua;
			this->button165->Location = System::Drawing::Point(380, 156);
			this->button165->Name = L"button165";
			this->button165->Size = System::Drawing::Size(32, 22);
			this->button165->TabIndex = 90;
			this->button165->Text = L"15_Thurusday";
			this->button165->UseVisualStyleBackColor = true;
			this->button165->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button166
			// 
			this->button166->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button166->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button166->ForeColor = System::Drawing::Color::Aqua;
			this->button166->Location = System::Drawing::Point(273, 156);
			this->button166->Name = L"button166";
			this->button166->Size = System::Drawing::Size(32, 22);
			this->button166->TabIndex = 89;
			this->button166->Text = L"14_Wednesday";
			this->button166->UseVisualStyleBackColor = true;
			this->button166->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button167
			// 
			this->button167->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button167->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button167->ForeColor = System::Drawing::Color::Aqua;
			this->button167->Location = System::Drawing::Point(179, 156);
			this->button167->Name = L"button167";
			this->button167->Size = System::Drawing::Size(32, 22);
			this->button167->TabIndex = 88;
			this->button167->Text = L"13_Tuesday";
			this->button167->UseVisualStyleBackColor = true;
			this->button167->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button168
			// 
			this->button168->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button168->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button168->ForeColor = System::Drawing::Color::Aqua;
			this->button168->Location = System::Drawing::Point(91, 156);
			this->button168->Name = L"button168";
			this->button168->Size = System::Drawing::Size(32, 22);
			this->button168->TabIndex = 76;
			this->button168->Text = L"12_Monday";
			this->button168->UseVisualStyleBackColor = true;
			this->button168->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button169
			// 
			this->button169->Location = System::Drawing::Point(652, 106);
			this->button169->Name = L"button169";
			this->button169->Size = System::Drawing::Size(32, 22);
			this->button169->TabIndex = 87;
			this->button169->Text = L"11";
			this->button169->UseVisualStyleBackColor = true;
			// 
			// button170
			// 
			this->button170->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button170->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button170->ForeColor = System::Drawing::Color::Aqua;
			this->button170->Location = System::Drawing::Point(545, 106);
			this->button170->Name = L"button170";
			this->button170->Size = System::Drawing::Size(32, 22);
			this->button170->TabIndex = 86;
			this->button170->Text = L"10_Saturday";
			this->button170->UseVisualStyleBackColor = true;
			this->button170->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button171
			// 
			this->button171->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button171->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button171->ForeColor = System::Drawing::Color::Aqua;
			this->button171->Location = System::Drawing::Point(475, 106);
			this->button171->Name = L"button171";
			this->button171->Size = System::Drawing::Size(32, 22);
			this->button171->TabIndex = 85;
			this->button171->Text = L"09_Friday";
			this->button171->UseVisualStyleBackColor = true;
			this->button171->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button172
			// 
			this->button172->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button172->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button172->ForeColor = System::Drawing::Color::Aqua;
			this->button172->Location = System::Drawing::Point(380, 106);
			this->button172->Name = L"button172";
			this->button172->Size = System::Drawing::Size(32, 22);
			this->button172->TabIndex = 84;
			this->button172->Text = L"08_Thurusday";
			this->button172->UseVisualStyleBackColor = true;
			this->button172->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button173
			// 
			this->button173->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button173->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button173->ForeColor = System::Drawing::Color::Aqua;
			this->button173->Location = System::Drawing::Point(273, 106);
			this->button173->Name = L"button173";
			this->button173->Size = System::Drawing::Size(32, 22);
			this->button173->TabIndex = 83;
			this->button173->Text = L"07_Wednesday";
			this->button173->UseVisualStyleBackColor = true;
			this->button173->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button174
			// 
			this->button174->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button174->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button174->ForeColor = System::Drawing::Color::Aqua;
			this->button174->Location = System::Drawing::Point(179, 106);
			this->button174->Name = L"button174";
			this->button174->Size = System::Drawing::Size(32, 22);
			this->button174->TabIndex = 82;
			this->button174->Text = L"06_Tuesday";
			this->button174->UseVisualStyleBackColor = true;
			this->button174->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button175
			// 
			this->button175->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button175->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button175->ForeColor = System::Drawing::Color::Aqua;
			this->button175->Location = System::Drawing::Point(91, 106);
			this->button175->Name = L"button175";
			this->button175->Size = System::Drawing::Size(32, 22);
			this->button175->TabIndex = 81;
			this->button175->Text = L"05_Monday";
			this->button175->UseVisualStyleBackColor = true;
			this->button175->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button176
			// 
			this->button176->Location = System::Drawing::Point(652, 60);
			this->button176->Name = L"button176";
			this->button176->Size = System::Drawing::Size(32, 22);
			this->button176->TabIndex = 80;
			this->button176->Text = L"4";
			this->button176->UseVisualStyleBackColor = true;
			// 
			// button177
			// 
			this->button177->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button177->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button177->ForeColor = System::Drawing::Color::Aqua;
			this->button177->Location = System::Drawing::Point(545, 60);
			this->button177->Name = L"button177";
			this->button177->Size = System::Drawing::Size(32, 22);
			this->button177->TabIndex = 79;
			this->button177->Text = L"03_Saturday";
			this->button177->UseVisualStyleBackColor = true;
			this->button177->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button178
			// 
			this->button178->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button178->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button178->ForeColor = System::Drawing::Color::Aqua;
			this->button178->Location = System::Drawing::Point(475, 60);
			this->button178->Name = L"button178";
			this->button178->Size = System::Drawing::Size(32, 22);
			this->button178->TabIndex = 78;
			this->button178->Text = L"02_Friday";
			this->button178->UseVisualStyleBackColor = true;
			this->button178->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button179
			// 
			this->button179->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button179->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button179->ForeColor = System::Drawing::Color::Aqua;
			this->button179->Location = System::Drawing::Point(380, 60);
			this->button179->Name = L"button179";
			this->button179->Size = System::Drawing::Size(32, 22);
			this->button179->TabIndex = 77;
			this->button179->Text = L"01_Thurusday";
			this->button179->UseVisualStyleBackColor = true;
			this->button179->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label91->ForeColor = System::Drawing::Color::Aqua;
			this->label91->Location = System::Drawing::Point(-27, 44);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(835, 13);
			this->label91->TabIndex = 14;
			this->label91->Text = resources->GetString(L"label91.Text");
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->ForeColor = System::Drawing::Color::Aqua;
			this->label43->Location = System::Drawing::Point(88, 20);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(51, 13);
			this->label43->TabIndex = 13;
			this->label43->Text = L"Monday";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->ForeColor = System::Drawing::Color::Aqua;
			this->label44->Location = System::Drawing::Point(176, 20);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(55, 13);
			this->label44->TabIndex = 12;
			this->label44->Text = L"Tuesday";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->ForeColor = System::Drawing::Color::Aqua;
			this->label45->Location = System::Drawing::Point(270, 20);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(73, 13);
			this->label45->TabIndex = 11;
			this->label45->Text = L"Wednesday";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->ForeColor = System::Drawing::Color::Aqua;
			this->label46->Location = System::Drawing::Point(377, 20);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(66, 13);
			this->label46->TabIndex = 10;
			this->label46->Text = L"Thurusday";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->ForeColor = System::Drawing::Color::Aqua;
			this->label47->Location = System::Drawing::Point(542, 20);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(57, 13);
			this->label47->TabIndex = 9;
			this->label47->Text = L"Saturday";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->ForeColor = System::Drawing::Color::Aqua;
			this->label48->Location = System::Drawing::Point(472, 20);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(41, 13);
			this->label48->TabIndex = 8;
			this->label48->Text = L"Friday";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->ForeColor = System::Drawing::Color::Aqua;
			this->label49->Location = System::Drawing::Point(6, 20);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(49, 13);
			this->label49->TabIndex = 7;
			this->label49->Text = L"Sunday";
			// 
			// tabPage8
			// 
			this->tabPage8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage8.BackgroundImage")));
			this->tabPage8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage8->Controls->Add(this->button216);
			this->tabPage8->Controls->Add(this->button186);
			this->tabPage8->Controls->Add(this->button187);
			this->tabPage8->Controls->Add(this->button188);
			this->tabPage8->Controls->Add(this->button189);
			this->tabPage8->Controls->Add(this->button190);
			this->tabPage8->Controls->Add(this->button191);
			this->tabPage8->Controls->Add(this->button192);
			this->tabPage8->Controls->Add(this->button193);
			this->tabPage8->Controls->Add(this->button194);
			this->tabPage8->Controls->Add(this->button195);
			this->tabPage8->Controls->Add(this->button196);
			this->tabPage8->Controls->Add(this->button197);
			this->tabPage8->Controls->Add(this->button198);
			this->tabPage8->Controls->Add(this->button199);
			this->tabPage8->Controls->Add(this->button200);
			this->tabPage8->Controls->Add(this->button201);
			this->tabPage8->Controls->Add(this->button202);
			this->tabPage8->Controls->Add(this->button203);
			this->tabPage8->Controls->Add(this->button204);
			this->tabPage8->Controls->Add(this->button205);
			this->tabPage8->Controls->Add(this->button206);
			this->tabPage8->Controls->Add(this->button207);
			this->tabPage8->Controls->Add(this->button208);
			this->tabPage8->Controls->Add(this->button209);
			this->tabPage8->Controls->Add(this->button210);
			this->tabPage8->Controls->Add(this->button211);
			this->tabPage8->Controls->Add(this->button212);
			this->tabPage8->Controls->Add(this->button213);
			this->tabPage8->Controls->Add(this->button214);
			this->tabPage8->Controls->Add(this->button215);
			this->tabPage8->Controls->Add(this->label92);
			this->tabPage8->Controls->Add(this->label50);
			this->tabPage8->Controls->Add(this->label51);
			this->tabPage8->Controls->Add(this->label52);
			this->tabPage8->Controls->Add(this->label53);
			this->tabPage8->Controls->Add(this->label54);
			this->tabPage8->Controls->Add(this->label55);
			this->tabPage8->Controls->Add(this->label56);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(597, 326);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"July";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// button216
			// 
			this->button216->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button216->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button216->ForeColor = System::Drawing::Color::Aqua;
			this->button216->Location = System::Drawing::Point(91, 296);
			this->button216->Name = L"button216";
			this->button216->Size = System::Drawing::Size(32, 22);
			this->button216->TabIndex = 170;
			this->button216->Text = L"31_Monday";
			this->button216->UseVisualStyleBackColor = true;
			this->button216->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button186
			// 
			this->button186->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button186->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button186->ForeColor = System::Drawing::Color::Aqua;
			this->button186->Location = System::Drawing::Point(9, 296);
			this->button186->Name = L"button186";
			this->button186->Size = System::Drawing::Size(32, 22);
			this->button186->TabIndex = 169;
			this->button186->Text = L"30_Sunday";
			this->button186->UseVisualStyleBackColor = true;
			this->button186->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button187
			// 
			this->button187->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button187->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button187->ForeColor = System::Drawing::Color::Aqua;
			this->button187->Location = System::Drawing::Point(545, 249);
			this->button187->Name = L"button187";
			this->button187->Size = System::Drawing::Size(32, 22);
			this->button187->TabIndex = 168;
			this->button187->Text = L"29_Saturday";
			this->button187->UseVisualStyleBackColor = true;
			this->button187->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button188
			// 
			this->button188->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button188->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button188->ForeColor = System::Drawing::Color::Aqua;
			this->button188->Location = System::Drawing::Point(475, 249);
			this->button188->Name = L"button188";
			this->button188->Size = System::Drawing::Size(32, 22);
			this->button188->TabIndex = 167;
			this->button188->Text = L"28_Friday";
			this->button188->UseVisualStyleBackColor = true;
			this->button188->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button189
			// 
			this->button189->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button189->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button189->ForeColor = System::Drawing::Color::Aqua;
			this->button189->Location = System::Drawing::Point(380, 249);
			this->button189->Name = L"button189";
			this->button189->Size = System::Drawing::Size(32, 22);
			this->button189->TabIndex = 166;
			this->button189->Text = L"27_Thurusday";
			this->button189->UseVisualStyleBackColor = true;
			this->button189->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button190
			// 
			this->button190->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button190->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button190->ForeColor = System::Drawing::Color::Aqua;
			this->button190->Location = System::Drawing::Point(273, 249);
			this->button190->Name = L"button190";
			this->button190->Size = System::Drawing::Size(32, 22);
			this->button190->TabIndex = 165;
			this->button190->Text = L"26_Wednesday";
			this->button190->UseVisualStyleBackColor = true;
			this->button190->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button191
			// 
			this->button191->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button191->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button191->ForeColor = System::Drawing::Color::Aqua;
			this->button191->Location = System::Drawing::Point(179, 249);
			this->button191->Name = L"button191";
			this->button191->Size = System::Drawing::Size(32, 22);
			this->button191->TabIndex = 164;
			this->button191->Text = L"25_Tuesday";
			this->button191->UseVisualStyleBackColor = true;
			this->button191->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button192
			// 
			this->button192->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button192->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button192->ForeColor = System::Drawing::Color::Aqua;
			this->button192->Location = System::Drawing::Point(91, 249);
			this->button192->Name = L"button192";
			this->button192->Size = System::Drawing::Size(32, 22);
			this->button192->TabIndex = 163;
			this->button192->Text = L"24_Monday";
			this->button192->UseVisualStyleBackColor = true;
			this->button192->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button193
			// 
			this->button193->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button193->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button193->ForeColor = System::Drawing::Color::Aqua;
			this->button193->Location = System::Drawing::Point(9, 249);
			this->button193->Name = L"button193";
			this->button193->Size = System::Drawing::Size(32, 22);
			this->button193->TabIndex = 162;
			this->button193->Text = L"23_Sunday";
			this->button193->UseVisualStyleBackColor = true;
			this->button193->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button194
			// 
			this->button194->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button194->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button194->ForeColor = System::Drawing::Color::Aqua;
			this->button194->Location = System::Drawing::Point(545, 202);
			this->button194->Name = L"button194";
			this->button194->Size = System::Drawing::Size(32, 22);
			this->button194->TabIndex = 161;
			this->button194->Text = L"22_Saturday";
			this->button194->UseVisualStyleBackColor = true;
			this->button194->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button195
			// 
			this->button195->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button195->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button195->ForeColor = System::Drawing::Color::Aqua;
			this->button195->Location = System::Drawing::Point(475, 202);
			this->button195->Name = L"button195";
			this->button195->Size = System::Drawing::Size(32, 22);
			this->button195->TabIndex = 160;
			this->button195->Text = L"21_Friday";
			this->button195->UseVisualStyleBackColor = true;
			this->button195->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button196
			// 
			this->button196->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button196->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button196->ForeColor = System::Drawing::Color::Aqua;
			this->button196->Location = System::Drawing::Point(380, 202);
			this->button196->Name = L"button196";
			this->button196->Size = System::Drawing::Size(32, 22);
			this->button196->TabIndex = 159;
			this->button196->Text = L"20_Thurusday";
			this->button196->UseVisualStyleBackColor = true;
			this->button196->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button197
			// 
			this->button197->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button197->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button197->ForeColor = System::Drawing::Color::Aqua;
			this->button197->Location = System::Drawing::Point(273, 202);
			this->button197->Name = L"button197";
			this->button197->Size = System::Drawing::Size(32, 22);
			this->button197->TabIndex = 158;
			this->button197->Text = L"19_Wednesday";
			this->button197->UseVisualStyleBackColor = true;
			this->button197->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button198
			// 
			this->button198->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button198->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button198->ForeColor = System::Drawing::Color::Aqua;
			this->button198->Location = System::Drawing::Point(179, 202);
			this->button198->Name = L"button198";
			this->button198->Size = System::Drawing::Size(32, 22);
			this->button198->TabIndex = 157;
			this->button198->Text = L"18_Tuesday";
			this->button198->UseVisualStyleBackColor = true;
			this->button198->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button199
			// 
			this->button199->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button199->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button199->ForeColor = System::Drawing::Color::Aqua;
			this->button199->Location = System::Drawing::Point(91, 202);
			this->button199->Name = L"button199";
			this->button199->Size = System::Drawing::Size(32, 22);
			this->button199->TabIndex = 156;
			this->button199->Text = L"17_Monday";
			this->button199->UseVisualStyleBackColor = true;
			this->button199->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button200
			// 
			this->button200->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button200->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button200->ForeColor = System::Drawing::Color::Aqua;
			this->button200->Location = System::Drawing::Point(9, 202);
			this->button200->Name = L"button200";
			this->button200->Size = System::Drawing::Size(32, 22);
			this->button200->TabIndex = 155;
			this->button200->Text = L"16_Sunday";
			this->button200->UseVisualStyleBackColor = true;
			this->button200->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button201
			// 
			this->button201->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button201->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button201->ForeColor = System::Drawing::Color::Aqua;
			this->button201->Location = System::Drawing::Point(545, 153);
			this->button201->Name = L"button201";
			this->button201->Size = System::Drawing::Size(32, 22);
			this->button201->TabIndex = 154;
			this->button201->Text = L"15_Saturday";
			this->button201->UseVisualStyleBackColor = true;
			this->button201->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button202
			// 
			this->button202->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button202->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button202->ForeColor = System::Drawing::Color::Aqua;
			this->button202->Location = System::Drawing::Point(475, 153);
			this->button202->Name = L"button202";
			this->button202->Size = System::Drawing::Size(32, 22);
			this->button202->TabIndex = 153;
			this->button202->Text = L"14_Friday";
			this->button202->UseVisualStyleBackColor = true;
			this->button202->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button203
			// 
			this->button203->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button203->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button203->ForeColor = System::Drawing::Color::Aqua;
			this->button203->Location = System::Drawing::Point(380, 153);
			this->button203->Name = L"button203";
			this->button203->Size = System::Drawing::Size(32, 22);
			this->button203->TabIndex = 152;
			this->button203->Text = L"13_Thurusday";
			this->button203->UseVisualStyleBackColor = true;
			this->button203->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button204
			// 
			this->button204->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button204->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button204->ForeColor = System::Drawing::Color::Aqua;
			this->button204->Location = System::Drawing::Point(273, 153);
			this->button204->Name = L"button204";
			this->button204->Size = System::Drawing::Size(32, 22);
			this->button204->TabIndex = 151;
			this->button204->Text = L"12_Wednesday";
			this->button204->UseVisualStyleBackColor = true;
			this->button204->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button205
			// 
			this->button205->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button205->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button205->ForeColor = System::Drawing::Color::Aqua;
			this->button205->Location = System::Drawing::Point(179, 153);
			this->button205->Name = L"button205";
			this->button205->Size = System::Drawing::Size(32, 22);
			this->button205->TabIndex = 150;
			this->button205->Text = L"11_Tuesday";
			this->button205->UseVisualStyleBackColor = true;
			this->button205->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button206
			// 
			this->button206->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button206->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button206->ForeColor = System::Drawing::Color::Aqua;
			this->button206->Location = System::Drawing::Point(91, 153);
			this->button206->Name = L"button206";
			this->button206->Size = System::Drawing::Size(32, 22);
			this->button206->TabIndex = 149;
			this->button206->Text = L"10_Monday";
			this->button206->UseVisualStyleBackColor = true;
			this->button206->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button207
			// 
			this->button207->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button207->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button207->ForeColor = System::Drawing::Color::Aqua;
			this->button207->Location = System::Drawing::Point(9, 153);
			this->button207->Name = L"button207";
			this->button207->Size = System::Drawing::Size(32, 22);
			this->button207->TabIndex = 140;
			this->button207->Text = L"09_Sunday";
			this->button207->UseVisualStyleBackColor = true;
			this->button207->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button208
			// 
			this->button208->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button208->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button208->ForeColor = System::Drawing::Color::Aqua;
			this->button208->Location = System::Drawing::Point(545, 103);
			this->button208->Name = L"button208";
			this->button208->Size = System::Drawing::Size(32, 22);
			this->button208->TabIndex = 148;
			this->button208->Text = L"08_Saturday";
			this->button208->UseVisualStyleBackColor = true;
			this->button208->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button209
			// 
			this->button209->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button209->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button209->ForeColor = System::Drawing::Color::Aqua;
			this->button209->Location = System::Drawing::Point(475, 103);
			this->button209->Name = L"button209";
			this->button209->Size = System::Drawing::Size(32, 22);
			this->button209->TabIndex = 147;
			this->button209->Text = L"07_Friday";
			this->button209->UseVisualStyleBackColor = true;
			this->button209->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button210
			// 
			this->button210->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button210->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button210->ForeColor = System::Drawing::Color::Aqua;
			this->button210->Location = System::Drawing::Point(380, 103);
			this->button210->Name = L"button210";
			this->button210->Size = System::Drawing::Size(32, 22);
			this->button210->TabIndex = 146;
			this->button210->Text = L"06_Thurusday";
			this->button210->UseVisualStyleBackColor = true;
			this->button210->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button211
			// 
			this->button211->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button211->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button211->ForeColor = System::Drawing::Color::Aqua;
			this->button211->Location = System::Drawing::Point(273, 103);
			this->button211->Name = L"button211";
			this->button211->Size = System::Drawing::Size(32, 22);
			this->button211->TabIndex = 145;
			this->button211->Text = L"05_Wednesday";
			this->button211->UseVisualStyleBackColor = true;
			this->button211->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button212
			// 
			this->button212->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button212->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button212->ForeColor = System::Drawing::Color::Aqua;
			this->button212->Location = System::Drawing::Point(179, 103);
			this->button212->Name = L"button212";
			this->button212->Size = System::Drawing::Size(32, 22);
			this->button212->TabIndex = 144;
			this->button212->Text = L"04_Tuesday";
			this->button212->UseVisualStyleBackColor = true;
			this->button212->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button213
			// 
			this->button213->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button213->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button213->ForeColor = System::Drawing::Color::Aqua;
			this->button213->Location = System::Drawing::Point(91, 103);
			this->button213->Name = L"button213";
			this->button213->Size = System::Drawing::Size(32, 22);
			this->button213->TabIndex = 143;
			this->button213->Text = L"03_Monday";
			this->button213->UseVisualStyleBackColor = true;
			this->button213->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button214
			// 
			this->button214->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button214->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button214->ForeColor = System::Drawing::Color::Aqua;
			this->button214->Location = System::Drawing::Point(9, 103);
			this->button214->Name = L"button214";
			this->button214->Size = System::Drawing::Size(32, 22);
			this->button214->TabIndex = 142;
			this->button214->Text = L"02_Sunday";
			this->button214->UseVisualStyleBackColor = true;
			this->button214->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button215
			// 
			this->button215->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button215->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button215->ForeColor = System::Drawing::Color::Aqua;
			this->button215->Location = System::Drawing::Point(545, 57);
			this->button215->Name = L"button215";
			this->button215->Size = System::Drawing::Size(32, 22);
			this->button215->TabIndex = 141;
			this->button215->Text = L"01_Saturday";
			this->button215->UseVisualStyleBackColor = true;
			this->button215->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label92->ForeColor = System::Drawing::Color::Aqua;
			this->label92->Location = System::Drawing::Point(-7, 41);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(835, 13);
			this->label92->TabIndex = 14;
			this->label92->Text = resources->GetString(L"label92.Text");
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->ForeColor = System::Drawing::Color::Aqua;
			this->label50->Location = System::Drawing::Point(88, 18);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(51, 13);
			this->label50->TabIndex = 13;
			this->label50->Text = L"Monday";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->ForeColor = System::Drawing::Color::Aqua;
			this->label51->Location = System::Drawing::Point(176, 18);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(55, 13);
			this->label51->TabIndex = 12;
			this->label51->Text = L"Tuesday";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->ForeColor = System::Drawing::Color::Aqua;
			this->label52->Location = System::Drawing::Point(270, 18);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(73, 13);
			this->label52->TabIndex = 11;
			this->label52->Text = L"Wednesday";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->ForeColor = System::Drawing::Color::Aqua;
			this->label53->Location = System::Drawing::Point(377, 18);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(66, 13);
			this->label53->TabIndex = 10;
			this->label53->Text = L"Thurusday";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->ForeColor = System::Drawing::Color::Aqua;
			this->label54->Location = System::Drawing::Point(542, 18);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(57, 13);
			this->label54->TabIndex = 9;
			this->label54->Text = L"Saturday";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->ForeColor = System::Drawing::Color::Aqua;
			this->label55->Location = System::Drawing::Point(472, 18);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(41, 13);
			this->label55->TabIndex = 8;
			this->label55->Text = L"Friday";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label56->ForeColor = System::Drawing::Color::Aqua;
			this->label56->Location = System::Drawing::Point(6, 18);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(49, 13);
			this->label56->TabIndex = 7;
			this->label56->Text = L"Sunday";
			// 
			// tabPage9
			// 
			this->tabPage9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage9.BackgroundImage")));
			this->tabPage9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage9->Controls->Add(this->button251);
			this->tabPage9->Controls->Add(this->button250);
			this->tabPage9->Controls->Add(this->button249);
			this->tabPage9->Controls->Add(this->button248);
			this->tabPage9->Controls->Add(this->button247);
			this->tabPage9->Controls->Add(this->button246);
			this->tabPage9->Controls->Add(this->button245);
			this->tabPage9->Controls->Add(this->button217);
			this->tabPage9->Controls->Add(this->button218);
			this->tabPage9->Controls->Add(this->button219);
			this->tabPage9->Controls->Add(this->button220);
			this->tabPage9->Controls->Add(this->button221);
			this->tabPage9->Controls->Add(this->button222);
			this->tabPage9->Controls->Add(this->button223);
			this->tabPage9->Controls->Add(this->button224);
			this->tabPage9->Controls->Add(this->button225);
			this->tabPage9->Controls->Add(this->button226);
			this->tabPage9->Controls->Add(this->button227);
			this->tabPage9->Controls->Add(this->button228);
			this->tabPage9->Controls->Add(this->button229);
			this->tabPage9->Controls->Add(this->button230);
			this->tabPage9->Controls->Add(this->button231);
			this->tabPage9->Controls->Add(this->button232);
			this->tabPage9->Controls->Add(this->button233);
			this->tabPage9->Controls->Add(this->button234);
			this->tabPage9->Controls->Add(this->button235);
			this->tabPage9->Controls->Add(this->button236);
			this->tabPage9->Controls->Add(this->button237);
			this->tabPage9->Controls->Add(this->button238);
			this->tabPage9->Controls->Add(this->button239);
			this->tabPage9->Controls->Add(this->button240);
			this->tabPage9->Controls->Add(this->button241);
			this->tabPage9->Controls->Add(this->button242);
			this->tabPage9->Controls->Add(this->button243);
			this->tabPage9->Controls->Add(this->button244);
			this->tabPage9->Controls->Add(this->label93);
			this->tabPage9->Controls->Add(this->label57);
			this->tabPage9->Controls->Add(this->label58);
			this->tabPage9->Controls->Add(this->label59);
			this->tabPage9->Controls->Add(this->label60);
			this->tabPage9->Controls->Add(this->label61);
			this->tabPage9->Controls->Add(this->label62);
			this->tabPage9->Controls->Add(this->label63);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(597, 326);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"August";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// button251
			// 
			this->button251->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button251->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button251->ForeColor = System::Drawing::Color::Aqua;
			this->button251->Location = System::Drawing::Point(380, 250);
			this->button251->Name = L"button251";
			this->button251->Size = System::Drawing::Size(32, 22);
			this->button251->TabIndex = 110;
			this->button251->Text = L"31_Thurusday";
			this->button251->UseVisualStyleBackColor = true;
			this->button251->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button250
			// 
			this->button250->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button250->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button250->ForeColor = System::Drawing::Color::Aqua;
			this->button250->Location = System::Drawing::Point(273, 250);
			this->button250->Name = L"button250";
			this->button250->Size = System::Drawing::Size(32, 22);
			this->button250->TabIndex = 109;
			this->button250->Text = L"30_Wednesday";
			this->button250->UseVisualStyleBackColor = true;
			this->button250->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button249
			// 
			this->button249->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button249->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button249->ForeColor = System::Drawing::Color::Aqua;
			this->button249->Location = System::Drawing::Point(179, 250);
			this->button249->Name = L"button249";
			this->button249->Size = System::Drawing::Size(32, 22);
			this->button249->TabIndex = 108;
			this->button249->Text = L"29_Tuesday";
			this->button249->UseVisualStyleBackColor = true;
			this->button249->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button248
			// 
			this->button248->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button248->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button248->ForeColor = System::Drawing::Color::Aqua;
			this->button248->Location = System::Drawing::Point(545, 203);
			this->button248->Name = L"button248";
			this->button248->Size = System::Drawing::Size(32, 22);
			this->button248->TabIndex = 107;
			this->button248->Text = L"26_Saturday";
			this->button248->UseVisualStyleBackColor = true;
			this->button248->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button247
			// 
			this->button247->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button247->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button247->ForeColor = System::Drawing::Color::Aqua;
			this->button247->Location = System::Drawing::Point(545, 154);
			this->button247->Name = L"button247";
			this->button247->Size = System::Drawing::Size(32, 22);
			this->button247->TabIndex = 106;
			this->button247->Text = L"19_Saturday";
			this->button247->UseVisualStyleBackColor = true;
			this->button247->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button246
			// 
			this->button246->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button246->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button246->ForeColor = System::Drawing::Color::Aqua;
			this->button246->Location = System::Drawing::Point(545, 104);
			this->button246->Name = L"button246";
			this->button246->Size = System::Drawing::Size(32, 22);
			this->button246->TabIndex = 105;
			this->button246->Text = L"12_Saturday";
			this->button246->UseVisualStyleBackColor = true;
			this->button246->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button245
			// 
			this->button245->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button245->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button245->ForeColor = System::Drawing::Color::Aqua;
			this->button245->Location = System::Drawing::Point(545, 58);
			this->button245->Name = L"button245";
			this->button245->Size = System::Drawing::Size(32, 22);
			this->button245->TabIndex = 104;
			this->button245->Text = L"05_Saturday";
			this->button245->UseVisualStyleBackColor = true;
			this->button245->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button217
			// 
			this->button217->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button217->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button217->ForeColor = System::Drawing::Color::Aqua;
			this->button217->Location = System::Drawing::Point(91, 250);
			this->button217->Name = L"button217";
			this->button217->Size = System::Drawing::Size(32, 22);
			this->button217->TabIndex = 103;
			this->button217->Text = L"28_Monday";
			this->button217->UseVisualStyleBackColor = true;
			this->button217->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button218
			// 
			this->button218->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button218->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button218->ForeColor = System::Drawing::Color::Aqua;
			this->button218->Location = System::Drawing::Point(9, 250);
			this->button218->Name = L"button218";
			this->button218->Size = System::Drawing::Size(32, 22);
			this->button218->TabIndex = 102;
			this->button218->Text = L"27_Sunday";
			this->button218->UseVisualStyleBackColor = true;
			this->button218->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button219
			// 
			this->button219->Location = System::Drawing::Point(-85, 265);
			this->button219->Name = L"button219";
			this->button219->Size = System::Drawing::Size(32, 22);
			this->button219->TabIndex = 101;
			this->button219->Text = L"26";
			this->button219->UseVisualStyleBackColor = true;
			// 
			// button220
			// 
			this->button220->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button220->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button220->ForeColor = System::Drawing::Color::Aqua;
			this->button220->Location = System::Drawing::Point(475, 203);
			this->button220->Name = L"button220";
			this->button220->Size = System::Drawing::Size(32, 22);
			this->button220->TabIndex = 100;
			this->button220->Text = L"25_Friday";
			this->button220->UseVisualStyleBackColor = true;
			this->button220->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button221
			// 
			this->button221->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button221->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button221->ForeColor = System::Drawing::Color::Aqua;
			this->button221->Location = System::Drawing::Point(380, 203);
			this->button221->Name = L"button221";
			this->button221->Size = System::Drawing::Size(32, 22);
			this->button221->TabIndex = 99;
			this->button221->Text = L"24_Thurusday";
			this->button221->UseVisualStyleBackColor = true;
			this->button221->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button222
			// 
			this->button222->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button222->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button222->ForeColor = System::Drawing::Color::Aqua;
			this->button222->Location = System::Drawing::Point(273, 203);
			this->button222->Name = L"button222";
			this->button222->Size = System::Drawing::Size(32, 22);
			this->button222->TabIndex = 98;
			this->button222->Text = L"23_Wednesday";
			this->button222->UseVisualStyleBackColor = true;
			this->button222->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button223
			// 
			this->button223->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button223->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button223->ForeColor = System::Drawing::Color::Aqua;
			this->button223->Location = System::Drawing::Point(179, 203);
			this->button223->Name = L"button223";
			this->button223->Size = System::Drawing::Size(32, 22);
			this->button223->TabIndex = 97;
			this->button223->Text = L"22_Tuesday";
			this->button223->UseVisualStyleBackColor = true;
			this->button223->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button224
			// 
			this->button224->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button224->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button224->ForeColor = System::Drawing::Color::Aqua;
			this->button224->Location = System::Drawing::Point(91, 203);
			this->button224->Name = L"button224";
			this->button224->Size = System::Drawing::Size(32, 22);
			this->button224->TabIndex = 96;
			this->button224->Text = L"21_Monday";
			this->button224->UseVisualStyleBackColor = true;
			this->button224->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button225
			// 
			this->button225->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button225->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button225->ForeColor = System::Drawing::Color::Aqua;
			this->button225->Location = System::Drawing::Point(9, 203);
			this->button225->Name = L"button225";
			this->button225->Size = System::Drawing::Size(32, 22);
			this->button225->TabIndex = 95;
			this->button225->Text = L"20_Sunday";
			this->button225->UseVisualStyleBackColor = true;
			this->button225->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button226
			// 
			this->button226->Location = System::Drawing::Point(-85, 218);
			this->button226->Name = L"button226";
			this->button226->Size = System::Drawing::Size(32, 22);
			this->button226->TabIndex = 94;
			this->button226->Text = L"19";
			this->button226->UseVisualStyleBackColor = true;
			// 
			// button227
			// 
			this->button227->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button227->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button227->ForeColor = System::Drawing::Color::Aqua;
			this->button227->Location = System::Drawing::Point(475, 154);
			this->button227->Name = L"button227";
			this->button227->Size = System::Drawing::Size(32, 22);
			this->button227->TabIndex = 93;
			this->button227->Text = L"18_Friday";
			this->button227->UseVisualStyleBackColor = true;
			this->button227->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button228
			// 
			this->button228->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button228->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button228->ForeColor = System::Drawing::Color::Aqua;
			this->button228->Location = System::Drawing::Point(380, 154);
			this->button228->Name = L"button228";
			this->button228->Size = System::Drawing::Size(32, 22);
			this->button228->TabIndex = 92;
			this->button228->Text = L"17_Thurusday";
			this->button228->UseVisualStyleBackColor = true;
			this->button228->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button229
			// 
			this->button229->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button229->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button229->ForeColor = System::Drawing::Color::Aqua;
			this->button229->Location = System::Drawing::Point(273, 154);
			this->button229->Name = L"button229";
			this->button229->Size = System::Drawing::Size(32, 22);
			this->button229->TabIndex = 91;
			this->button229->Text = L"16_Wednesday";
			this->button229->UseVisualStyleBackColor = true;
			this->button229->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button230
			// 
			this->button230->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button230->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button230->ForeColor = System::Drawing::Color::Aqua;
			this->button230->Location = System::Drawing::Point(179, 154);
			this->button230->Name = L"button230";
			this->button230->Size = System::Drawing::Size(32, 22);
			this->button230->TabIndex = 90;
			this->button230->Text = L"15_Tuesday";
			this->button230->UseVisualStyleBackColor = true;
			this->button230->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button231
			// 
			this->button231->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button231->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button231->ForeColor = System::Drawing::Color::Aqua;
			this->button231->Location = System::Drawing::Point(91, 154);
			this->button231->Name = L"button231";
			this->button231->Size = System::Drawing::Size(32, 22);
			this->button231->TabIndex = 89;
			this->button231->Text = L"14_Monday";
			this->button231->UseVisualStyleBackColor = true;
			this->button231->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button232
			// 
			this->button232->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button232->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button232->ForeColor = System::Drawing::Color::Aqua;
			this->button232->Location = System::Drawing::Point(9, 154);
			this->button232->Name = L"button232";
			this->button232->Size = System::Drawing::Size(32, 22);
			this->button232->TabIndex = 88;
			this->button232->Text = L"13_Sunday";
			this->button232->UseVisualStyleBackColor = true;
			this->button232->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button233
			// 
			this->button233->Location = System::Drawing::Point(-85, 169);
			this->button233->Name = L"button233";
			this->button233->Size = System::Drawing::Size(32, 22);
			this->button233->TabIndex = 76;
			this->button233->Text = L"12";
			this->button233->UseVisualStyleBackColor = true;
			// 
			// button234
			// 
			this->button234->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button234->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button234->ForeColor = System::Drawing::Color::Aqua;
			this->button234->Location = System::Drawing::Point(475, 104);
			this->button234->Name = L"button234";
			this->button234->Size = System::Drawing::Size(32, 22);
			this->button234->TabIndex = 87;
			this->button234->Text = L"11_Friday";
			this->button234->UseVisualStyleBackColor = true;
			this->button234->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button235
			// 
			this->button235->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button235->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button235->ForeColor = System::Drawing::Color::Aqua;
			this->button235->Location = System::Drawing::Point(380, 104);
			this->button235->Name = L"button235";
			this->button235->Size = System::Drawing::Size(32, 22);
			this->button235->TabIndex = 86;
			this->button235->Text = L"10_Thurusday";
			this->button235->UseVisualStyleBackColor = true;
			this->button235->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button236
			// 
			this->button236->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button236->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button236->ForeColor = System::Drawing::Color::Aqua;
			this->button236->Location = System::Drawing::Point(273, 104);
			this->button236->Name = L"button236";
			this->button236->Size = System::Drawing::Size(32, 22);
			this->button236->TabIndex = 85;
			this->button236->Text = L"09_Wednesday";
			this->button236->UseVisualStyleBackColor = true;
			this->button236->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button237
			// 
			this->button237->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button237->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button237->ForeColor = System::Drawing::Color::Aqua;
			this->button237->Location = System::Drawing::Point(179, 104);
			this->button237->Name = L"button237";
			this->button237->Size = System::Drawing::Size(32, 22);
			this->button237->TabIndex = 84;
			this->button237->Text = L"08_Tuesday";
			this->button237->UseVisualStyleBackColor = true;
			this->button237->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button238
			// 
			this->button238->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button238->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button238->ForeColor = System::Drawing::Color::Aqua;
			this->button238->Location = System::Drawing::Point(91, 104);
			this->button238->Name = L"button238";
			this->button238->Size = System::Drawing::Size(32, 22);
			this->button238->TabIndex = 83;
			this->button238->Text = L"07_Monday";
			this->button238->UseVisualStyleBackColor = true;
			this->button238->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button239
			// 
			this->button239->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button239->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button239->ForeColor = System::Drawing::Color::Aqua;
			this->button239->Location = System::Drawing::Point(9, 104);
			this->button239->Name = L"button239";
			this->button239->Size = System::Drawing::Size(32, 22);
			this->button239->TabIndex = 82;
			this->button239->Text = L"06_Sunday";
			this->button239->UseVisualStyleBackColor = true;
			this->button239->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button240
			// 
			this->button240->Location = System::Drawing::Point(-85, 119);
			this->button240->Name = L"button240";
			this->button240->Size = System::Drawing::Size(32, 22);
			this->button240->TabIndex = 81;
			this->button240->Text = L"5";
			this->button240->UseVisualStyleBackColor = true;
			// 
			// button241
			// 
			this->button241->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button241->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button241->ForeColor = System::Drawing::Color::Aqua;
			this->button241->Location = System::Drawing::Point(475, 58);
			this->button241->Name = L"button241";
			this->button241->Size = System::Drawing::Size(32, 22);
			this->button241->TabIndex = 80;
			this->button241->Text = L"04_Friday";
			this->button241->UseVisualStyleBackColor = true;
			this->button241->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button242
			// 
			this->button242->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button242->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button242->ForeColor = System::Drawing::Color::Aqua;
			this->button242->Location = System::Drawing::Point(380, 58);
			this->button242->Name = L"button242";
			this->button242->Size = System::Drawing::Size(32, 22);
			this->button242->TabIndex = 79;
			this->button242->Text = L"03_Thurusday";
			this->button242->UseVisualStyleBackColor = true;
			this->button242->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button243
			// 
			this->button243->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button243->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button243->ForeColor = System::Drawing::Color::Aqua;
			this->button243->Location = System::Drawing::Point(273, 58);
			this->button243->Name = L"button243";
			this->button243->Size = System::Drawing::Size(32, 22);
			this->button243->TabIndex = 78;
			this->button243->Text = L"02_Wednesday";
			this->button243->UseVisualStyleBackColor = true;
			this->button243->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button244
			// 
			this->button244->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button244->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button244->ForeColor = System::Drawing::Color::Aqua;
			this->button244->Location = System::Drawing::Point(179, 58);
			this->button244->Name = L"button244";
			this->button244->Size = System::Drawing::Size(32, 22);
			this->button244->TabIndex = 77;
			this->button244->Text = L"01_Tuesday";
			this->button244->UseVisualStyleBackColor = true;
			this->button244->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label93->ForeColor = System::Drawing::Color::Aqua;
			this->label93->Location = System::Drawing::Point(-7, 42);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(835, 13);
			this->label93->TabIndex = 14;
			this->label93->Text = resources->GetString(L"label93.Text");
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label57->ForeColor = System::Drawing::Color::Aqua;
			this->label57->Location = System::Drawing::Point(88, 20);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(51, 13);
			this->label57->TabIndex = 13;
			this->label57->Text = L"Monday";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label58->ForeColor = System::Drawing::Color::Aqua;
			this->label58->Location = System::Drawing::Point(176, 20);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(55, 13);
			this->label58->TabIndex = 12;
			this->label58->Text = L"Tuesday";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label59->ForeColor = System::Drawing::Color::Aqua;
			this->label59->Location = System::Drawing::Point(270, 20);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(73, 13);
			this->label59->TabIndex = 11;
			this->label59->Text = L"Wednesday";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label60->ForeColor = System::Drawing::Color::Aqua;
			this->label60->Location = System::Drawing::Point(377, 20);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(66, 13);
			this->label60->TabIndex = 10;
			this->label60->Text = L"Thurusday";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label61->ForeColor = System::Drawing::Color::Aqua;
			this->label61->Location = System::Drawing::Point(542, 20);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(57, 13);
			this->label61->TabIndex = 9;
			this->label61->Text = L"Saturday";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label62->ForeColor = System::Drawing::Color::Aqua;
			this->label62->Location = System::Drawing::Point(472, 20);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(41, 13);
			this->label62->TabIndex = 8;
			this->label62->Text = L"Friday";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label63->ForeColor = System::Drawing::Color::Aqua;
			this->label63->Location = System::Drawing::Point(6, 20);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(49, 13);
			this->label63->TabIndex = 7;
			this->label63->Text = L"Sunday";
			// 
			// tabPage10
			// 
			this->tabPage10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage10.BackgroundImage")));
			this->tabPage10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage10->Controls->Add(this->button287);
			this->tabPage10->Controls->Add(this->button286);
			this->tabPage10->Controls->Add(this->button285);
			this->tabPage10->Controls->Add(this->button284);
			this->tabPage10->Controls->Add(this->button283);
			this->tabPage10->Controls->Add(this->button253);
			this->tabPage10->Controls->Add(this->button254);
			this->tabPage10->Controls->Add(this->button255);
			this->tabPage10->Controls->Add(this->button256);
			this->tabPage10->Controls->Add(this->button257);
			this->tabPage10->Controls->Add(this->button258);
			this->tabPage10->Controls->Add(this->button259);
			this->tabPage10->Controls->Add(this->button260);
			this->tabPage10->Controls->Add(this->button261);
			this->tabPage10->Controls->Add(this->button262);
			this->tabPage10->Controls->Add(this->button263);
			this->tabPage10->Controls->Add(this->button264);
			this->tabPage10->Controls->Add(this->button265);
			this->tabPage10->Controls->Add(this->button266);
			this->tabPage10->Controls->Add(this->button267);
			this->tabPage10->Controls->Add(this->button268);
			this->tabPage10->Controls->Add(this->button269);
			this->tabPage10->Controls->Add(this->button270);
			this->tabPage10->Controls->Add(this->button271);
			this->tabPage10->Controls->Add(this->button272);
			this->tabPage10->Controls->Add(this->button273);
			this->tabPage10->Controls->Add(this->button274);
			this->tabPage10->Controls->Add(this->button275);
			this->tabPage10->Controls->Add(this->button276);
			this->tabPage10->Controls->Add(this->button277);
			this->tabPage10->Controls->Add(this->button278);
			this->tabPage10->Controls->Add(this->button279);
			this->tabPage10->Controls->Add(this->button280);
			this->tabPage10->Controls->Add(this->button281);
			this->tabPage10->Controls->Add(this->button282);
			this->tabPage10->Controls->Add(this->label94);
			this->tabPage10->Controls->Add(this->label64);
			this->tabPage10->Controls->Add(this->label65);
			this->tabPage10->Controls->Add(this->label66);
			this->tabPage10->Controls->Add(this->label67);
			this->tabPage10->Controls->Add(this->label68);
			this->tabPage10->Controls->Add(this->label69);
			this->tabPage10->Controls->Add(this->label70);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(597, 326);
			this->tabPage10->TabIndex = 9;
			this->tabPage10->Text = L"September";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// button287
			// 
			this->button287->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button287->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button287->ForeColor = System::Drawing::Color::Aqua;
			this->button287->Location = System::Drawing::Point(545, 249);
			this->button287->Name = L"button287";
			this->button287->Size = System::Drawing::Size(32, 22);
			this->button287->TabIndex = 206;
			this->button287->Text = L"30_Saturday";
			this->button287->UseVisualStyleBackColor = true;
			this->button287->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button286
			// 
			this->button286->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button286->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button286->ForeColor = System::Drawing::Color::Aqua;
			this->button286->Location = System::Drawing::Point(545, 202);
			this->button286->Name = L"button286";
			this->button286->Size = System::Drawing::Size(32, 22);
			this->button286->TabIndex = 205;
			this->button286->Text = L"23_Saturday";
			this->button286->UseVisualStyleBackColor = true;
			this->button286->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button285
			// 
			this->button285->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button285->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button285->ForeColor = System::Drawing::Color::Aqua;
			this->button285->Location = System::Drawing::Point(545, 153);
			this->button285->Name = L"button285";
			this->button285->Size = System::Drawing::Size(32, 22);
			this->button285->TabIndex = 204;
			this->button285->Text = L"16_Saturday";
			this->button285->UseVisualStyleBackColor = true;
			this->button285->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button284
			// 
			this->button284->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button284->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button284->ForeColor = System::Drawing::Color::Aqua;
			this->button284->Location = System::Drawing::Point(545, 103);
			this->button284->Name = L"button284";
			this->button284->Size = System::Drawing::Size(32, 22);
			this->button284->TabIndex = 203;
			this->button284->Text = L"09_Saturday";
			this->button284->UseVisualStyleBackColor = true;
			this->button284->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button283
			// 
			this->button283->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button283->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button283->ForeColor = System::Drawing::Color::Aqua;
			this->button283->Location = System::Drawing::Point(545, 57);
			this->button283->Name = L"button283";
			this->button283->Size = System::Drawing::Size(32, 22);
			this->button283->TabIndex = 202;
			this->button283->Text = L"02_Saturday";
			this->button283->UseVisualStyleBackColor = true;
			this->button283->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button253
			// 
			this->button253->Location = System::Drawing::Point(-61, 296);
			this->button253->Name = L"button253";
			this->button253->Size = System::Drawing::Size(32, 22);
			this->button253->TabIndex = 200;
			this->button253->Text = L"30";
			this->button253->UseVisualStyleBackColor = true;
			// 
			// button254
			// 
			this->button254->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button254->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button254->ForeColor = System::Drawing::Color::Aqua;
			this->button254->Location = System::Drawing::Point(475, 249);
			this->button254->Name = L"button254";
			this->button254->Size = System::Drawing::Size(32, 22);
			this->button254->TabIndex = 199;
			this->button254->Text = L"29_Friday";
			this->button254->UseVisualStyleBackColor = true;
			this->button254->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button255
			// 
			this->button255->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button255->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button255->ForeColor = System::Drawing::Color::Aqua;
			this->button255->Location = System::Drawing::Point(380, 249);
			this->button255->Name = L"button255";
			this->button255->Size = System::Drawing::Size(32, 22);
			this->button255->TabIndex = 198;
			this->button255->Text = L"28_Thurusday";
			this->button255->UseVisualStyleBackColor = true;
			this->button255->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button256
			// 
			this->button256->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button256->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button256->ForeColor = System::Drawing::Color::Aqua;
			this->button256->Location = System::Drawing::Point(273, 249);
			this->button256->Name = L"button256";
			this->button256->Size = System::Drawing::Size(32, 22);
			this->button256->TabIndex = 197;
			this->button256->Text = L"27_Wednesday";
			this->button256->UseVisualStyleBackColor = true;
			this->button256->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button257
			// 
			this->button257->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button257->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button257->ForeColor = System::Drawing::Color::Aqua;
			this->button257->Location = System::Drawing::Point(179, 249);
			this->button257->Name = L"button257";
			this->button257->Size = System::Drawing::Size(32, 22);
			this->button257->TabIndex = 196;
			this->button257->Text = L"26_Tuesday";
			this->button257->UseVisualStyleBackColor = true;
			this->button257->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button258
			// 
			this->button258->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button258->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button258->ForeColor = System::Drawing::Color::Aqua;
			this->button258->Location = System::Drawing::Point(91, 249);
			this->button258->Name = L"button258";
			this->button258->Size = System::Drawing::Size(32, 22);
			this->button258->TabIndex = 195;
			this->button258->Text = L"25_Monday";
			this->button258->UseVisualStyleBackColor = true;
			this->button258->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button259
			// 
			this->button259->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button259->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button259->ForeColor = System::Drawing::Color::Aqua;
			this->button259->Location = System::Drawing::Point(9, 249);
			this->button259->Name = L"button259";
			this->button259->Size = System::Drawing::Size(32, 22);
			this->button259->TabIndex = 194;
			this->button259->Text = L"24_Sunday";
			this->button259->UseVisualStyleBackColor = true;
			this->button259->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button260
			// 
			this->button260->Location = System::Drawing::Point(-61, 249);
			this->button260->Name = L"button260";
			this->button260->Size = System::Drawing::Size(32, 22);
			this->button260->TabIndex = 193;
			this->button260->Text = L"23";
			this->button260->UseVisualStyleBackColor = true;
			// 
			// button261
			// 
			this->button261->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button261->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button261->ForeColor = System::Drawing::Color::Aqua;
			this->button261->Location = System::Drawing::Point(475, 202);
			this->button261->Name = L"button261";
			this->button261->Size = System::Drawing::Size(32, 22);
			this->button261->TabIndex = 192;
			this->button261->Text = L"22_Friday";
			this->button261->UseVisualStyleBackColor = true;
			this->button261->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button262
			// 
			this->button262->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button262->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button262->ForeColor = System::Drawing::Color::Aqua;
			this->button262->Location = System::Drawing::Point(380, 202);
			this->button262->Name = L"button262";
			this->button262->Size = System::Drawing::Size(32, 22);
			this->button262->TabIndex = 191;
			this->button262->Text = L"21_Thurusday";
			this->button262->UseVisualStyleBackColor = true;
			this->button262->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button263
			// 
			this->button263->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button263->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button263->ForeColor = System::Drawing::Color::Aqua;
			this->button263->Location = System::Drawing::Point(273, 202);
			this->button263->Name = L"button263";
			this->button263->Size = System::Drawing::Size(32, 22);
			this->button263->TabIndex = 190;
			this->button263->Text = L"20_Wednesday";
			this->button263->UseVisualStyleBackColor = true;
			this->button263->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button264
			// 
			this->button264->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button264->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button264->ForeColor = System::Drawing::Color::Aqua;
			this->button264->Location = System::Drawing::Point(179, 202);
			this->button264->Name = L"button264";
			this->button264->Size = System::Drawing::Size(32, 22);
			this->button264->TabIndex = 189;
			this->button264->Text = L"19_Tuesday";
			this->button264->UseVisualStyleBackColor = true;
			this->button264->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button265
			// 
			this->button265->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button265->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button265->ForeColor = System::Drawing::Color::Aqua;
			this->button265->Location = System::Drawing::Point(91, 202);
			this->button265->Name = L"button265";
			this->button265->Size = System::Drawing::Size(32, 22);
			this->button265->TabIndex = 188;
			this->button265->Text = L"18_Monday";
			this->button265->UseVisualStyleBackColor = true;
			this->button265->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button266
			// 
			this->button266->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button266->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button266->ForeColor = System::Drawing::Color::Aqua;
			this->button266->Location = System::Drawing::Point(9, 202);
			this->button266->Name = L"button266";
			this->button266->Size = System::Drawing::Size(32, 22);
			this->button266->TabIndex = 187;
			this->button266->Text = L"17_Sunday";
			this->button266->UseVisualStyleBackColor = true;
			this->button266->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button267
			// 
			this->button267->Location = System::Drawing::Point(-61, 202);
			this->button267->Name = L"button267";
			this->button267->Size = System::Drawing::Size(32, 22);
			this->button267->TabIndex = 186;
			this->button267->Text = L"16";
			this->button267->UseVisualStyleBackColor = true;
			// 
			// button268
			// 
			this->button268->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button268->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button268->ForeColor = System::Drawing::Color::Aqua;
			this->button268->Location = System::Drawing::Point(475, 153);
			this->button268->Name = L"button268";
			this->button268->Size = System::Drawing::Size(32, 22);
			this->button268->TabIndex = 185;
			this->button268->Text = L"15_Friday";
			this->button268->UseVisualStyleBackColor = true;
			this->button268->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button269
			// 
			this->button269->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button269->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button269->ForeColor = System::Drawing::Color::Aqua;
			this->button269->Location = System::Drawing::Point(380, 153);
			this->button269->Name = L"button269";
			this->button269->Size = System::Drawing::Size(32, 22);
			this->button269->TabIndex = 184;
			this->button269->Text = L"14_Thurusday";
			this->button269->UseVisualStyleBackColor = true;
			this->button269->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button270
			// 
			this->button270->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button270->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button270->ForeColor = System::Drawing::Color::Aqua;
			this->button270->Location = System::Drawing::Point(273, 153);
			this->button270->Name = L"button270";
			this->button270->Size = System::Drawing::Size(32, 22);
			this->button270->TabIndex = 183;
			this->button270->Text = L"13_Wednesday";
			this->button270->UseVisualStyleBackColor = true;
			this->button270->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button271
			// 
			this->button271->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button271->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button271->ForeColor = System::Drawing::Color::Aqua;
			this->button271->Location = System::Drawing::Point(179, 153);
			this->button271->Name = L"button271";
			this->button271->Size = System::Drawing::Size(32, 22);
			this->button271->TabIndex = 182;
			this->button271->Text = L"12_Tuesday";
			this->button271->UseVisualStyleBackColor = true;
			this->button271->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button272
			// 
			this->button272->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button272->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button272->ForeColor = System::Drawing::Color::Aqua;
			this->button272->Location = System::Drawing::Point(91, 153);
			this->button272->Name = L"button272";
			this->button272->Size = System::Drawing::Size(32, 22);
			this->button272->TabIndex = 181;
			this->button272->Text = L"11_Monday";
			this->button272->UseVisualStyleBackColor = true;
			this->button272->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button273
			// 
			this->button273->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button273->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button273->ForeColor = System::Drawing::Color::Aqua;
			this->button273->Location = System::Drawing::Point(9, 153);
			this->button273->Name = L"button273";
			this->button273->Size = System::Drawing::Size(32, 22);
			this->button273->TabIndex = 180;
			this->button273->Text = L"10_Sunday";
			this->button273->UseVisualStyleBackColor = true;
			this->button273->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button274
			// 
			this->button274->Location = System::Drawing::Point(-61, 153);
			this->button274->Name = L"button274";
			this->button274->Size = System::Drawing::Size(32, 22);
			this->button274->TabIndex = 171;
			this->button274->Text = L"9";
			this->button274->UseVisualStyleBackColor = true;
			// 
			// button275
			// 
			this->button275->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button275->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button275->ForeColor = System::Drawing::Color::Aqua;
			this->button275->Location = System::Drawing::Point(475, 103);
			this->button275->Name = L"button275";
			this->button275->Size = System::Drawing::Size(32, 22);
			this->button275->TabIndex = 179;
			this->button275->Text = L"08_Friday";
			this->button275->UseVisualStyleBackColor = true;
			this->button275->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button276
			// 
			this->button276->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button276->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button276->ForeColor = System::Drawing::Color::Aqua;
			this->button276->Location = System::Drawing::Point(380, 103);
			this->button276->Name = L"button276";
			this->button276->Size = System::Drawing::Size(32, 22);
			this->button276->TabIndex = 178;
			this->button276->Text = L"07_Thurusday";
			this->button276->UseVisualStyleBackColor = true;
			this->button276->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button277
			// 
			this->button277->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button277->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button277->ForeColor = System::Drawing::Color::Aqua;
			this->button277->Location = System::Drawing::Point(273, 103);
			this->button277->Name = L"button277";
			this->button277->Size = System::Drawing::Size(32, 22);
			this->button277->TabIndex = 177;
			this->button277->Text = L"06_Wednesday";
			this->button277->UseVisualStyleBackColor = true;
			this->button277->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button278
			// 
			this->button278->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button278->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button278->ForeColor = System::Drawing::Color::Aqua;
			this->button278->Location = System::Drawing::Point(179, 103);
			this->button278->Name = L"button278";
			this->button278->Size = System::Drawing::Size(32, 22);
			this->button278->TabIndex = 176;
			this->button278->Text = L"05_Tuesday";
			this->button278->UseVisualStyleBackColor = true;
			this->button278->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button279
			// 
			this->button279->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button279->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button279->ForeColor = System::Drawing::Color::Aqua;
			this->button279->Location = System::Drawing::Point(91, 103);
			this->button279->Name = L"button279";
			this->button279->Size = System::Drawing::Size(32, 22);
			this->button279->TabIndex = 175;
			this->button279->Text = L"04_Monday";
			this->button279->UseVisualStyleBackColor = true;
			this->button279->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button280
			// 
			this->button280->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button280->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button280->ForeColor = System::Drawing::Color::Aqua;
			this->button280->Location = System::Drawing::Point(9, 103);
			this->button280->Name = L"button280";
			this->button280->Size = System::Drawing::Size(32, 22);
			this->button280->TabIndex = 174;
			this->button280->Text = L"03_Sunday";
			this->button280->UseVisualStyleBackColor = true;
			this->button280->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button281
			// 
			this->button281->Location = System::Drawing::Point(-61, 103);
			this->button281->Name = L"button281";
			this->button281->Size = System::Drawing::Size(32, 22);
			this->button281->TabIndex = 173;
			this->button281->Text = L"2";
			this->button281->UseVisualStyleBackColor = true;
			// 
			// button282
			// 
			this->button282->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button282->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button282->ForeColor = System::Drawing::Color::Aqua;
			this->button282->Location = System::Drawing::Point(475, 57);
			this->button282->Name = L"button282";
			this->button282->Size = System::Drawing::Size(32, 22);
			this->button282->TabIndex = 172;
			this->button282->Text = L"01_Friday";
			this->button282->UseVisualStyleBackColor = true;
			this->button282->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label94->ForeColor = System::Drawing::Color::Aqua;
			this->label94->Location = System::Drawing::Point(-7, 41);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(835, 13);
			this->label94->TabIndex = 14;
			this->label94->Text = resources->GetString(L"label94.Text");
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label64->ForeColor = System::Drawing::Color::Aqua;
			this->label64->Location = System::Drawing::Point(88, 19);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(51, 13);
			this->label64->TabIndex = 13;
			this->label64->Text = L"Monday";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label65->ForeColor = System::Drawing::Color::Aqua;
			this->label65->Location = System::Drawing::Point(176, 19);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(55, 13);
			this->label65->TabIndex = 12;
			this->label65->Text = L"Tuesday";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label66->ForeColor = System::Drawing::Color::Aqua;
			this->label66->Location = System::Drawing::Point(270, 19);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(73, 13);
			this->label66->TabIndex = 11;
			this->label66->Text = L"Wednesday";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label67->ForeColor = System::Drawing::Color::Aqua;
			this->label67->Location = System::Drawing::Point(377, 19);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(66, 13);
			this->label67->TabIndex = 10;
			this->label67->Text = L"Thurusday";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label68->ForeColor = System::Drawing::Color::Aqua;
			this->label68->Location = System::Drawing::Point(542, 19);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(57, 13);
			this->label68->TabIndex = 9;
			this->label68->Text = L"Saturday";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label69->ForeColor = System::Drawing::Color::Aqua;
			this->label69->Location = System::Drawing::Point(472, 19);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(41, 13);
			this->label69->TabIndex = 8;
			this->label69->Text = L"Friday";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label70->ForeColor = System::Drawing::Color::Aqua;
			this->label70->Location = System::Drawing::Point(6, 19);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(49, 13);
			this->label70->TabIndex = 7;
			this->label70->Text = L"Sunday";
			// 
			// tabPage11
			// 
			this->tabPage11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage11.BackgroundImage")));
			this->tabPage11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage11->Controls->Add(this->button252);
			this->tabPage11->Controls->Add(this->button288);
			this->tabPage11->Controls->Add(this->button289);
			this->tabPage11->Controls->Add(this->button290);
			this->tabPage11->Controls->Add(this->button291);
			this->tabPage11->Controls->Add(this->button292);
			this->tabPage11->Controls->Add(this->button293);
			this->tabPage11->Controls->Add(this->button294);
			this->tabPage11->Controls->Add(this->button295);
			this->tabPage11->Controls->Add(this->button296);
			this->tabPage11->Controls->Add(this->button297);
			this->tabPage11->Controls->Add(this->button298);
			this->tabPage11->Controls->Add(this->button299);
			this->tabPage11->Controls->Add(this->button300);
			this->tabPage11->Controls->Add(this->button301);
			this->tabPage11->Controls->Add(this->button302);
			this->tabPage11->Controls->Add(this->button303);
			this->tabPage11->Controls->Add(this->button304);
			this->tabPage11->Controls->Add(this->button305);
			this->tabPage11->Controls->Add(this->button306);
			this->tabPage11->Controls->Add(this->button307);
			this->tabPage11->Controls->Add(this->button308);
			this->tabPage11->Controls->Add(this->button309);
			this->tabPage11->Controls->Add(this->button310);
			this->tabPage11->Controls->Add(this->button311);
			this->tabPage11->Controls->Add(this->button312);
			this->tabPage11->Controls->Add(this->button313);
			this->tabPage11->Controls->Add(this->button314);
			this->tabPage11->Controls->Add(this->button315);
			this->tabPage11->Controls->Add(this->button316);
			this->tabPage11->Controls->Add(this->button317);
			this->tabPage11->Controls->Add(this->label95);
			this->tabPage11->Controls->Add(this->label71);
			this->tabPage11->Controls->Add(this->label72);
			this->tabPage11->Controls->Add(this->label73);
			this->tabPage11->Controls->Add(this->label74);
			this->tabPage11->Controls->Add(this->label75);
			this->tabPage11->Controls->Add(this->label76);
			this->tabPage11->Controls->Add(this->label77);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(597, 326);
			this->tabPage11->TabIndex = 10;
			this->tabPage11->Text = L"October";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// button252
			// 
			this->button252->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button252->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button252->ForeColor = System::Drawing::Color::Aqua;
			this->button252->Location = System::Drawing::Point(179, 244);
			this->button252->Name = L"button252";
			this->button252->Size = System::Drawing::Size(32, 22);
			this->button252->TabIndex = 75;
			this->button252->Text = L"31_Tuesday";
			this->button252->UseVisualStyleBackColor = true;
			this->button252->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button288
			// 
			this->button288->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button288->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button288->ForeColor = System::Drawing::Color::Aqua;
			this->button288->Location = System::Drawing::Point(91, 244);
			this->button288->Name = L"button288";
			this->button288->Size = System::Drawing::Size(32, 22);
			this->button288->TabIndex = 74;
			this->button288->Text = L"30_Monday";
			this->button288->UseVisualStyleBackColor = true;
			this->button288->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button289
			// 
			this->button289->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button289->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button289->ForeColor = System::Drawing::Color::Aqua;
			this->button289->Location = System::Drawing::Point(9, 244);
			this->button289->Name = L"button289";
			this->button289->Size = System::Drawing::Size(32, 22);
			this->button289->TabIndex = 73;
			this->button289->Text = L"29_Sunday";
			this->button289->UseVisualStyleBackColor = true;
			this->button289->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button290
			// 
			this->button290->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button290->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button290->ForeColor = System::Drawing::Color::Aqua;
			this->button290->Location = System::Drawing::Point(545, 197);
			this->button290->Name = L"button290";
			this->button290->Size = System::Drawing::Size(32, 22);
			this->button290->TabIndex = 72;
			this->button290->Text = L"28_Saturday";
			this->button290->UseVisualStyleBackColor = true;
			this->button290->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button291
			// 
			this->button291->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button291->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button291->ForeColor = System::Drawing::Color::Aqua;
			this->button291->Location = System::Drawing::Point(475, 197);
			this->button291->Name = L"button291";
			this->button291->Size = System::Drawing::Size(32, 22);
			this->button291->TabIndex = 71;
			this->button291->Text = L"27_Friday";
			this->button291->UseVisualStyleBackColor = true;
			this->button291->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button292
			// 
			this->button292->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button292->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button292->ForeColor = System::Drawing::Color::Aqua;
			this->button292->Location = System::Drawing::Point(380, 197);
			this->button292->Name = L"button292";
			this->button292->Size = System::Drawing::Size(32, 22);
			this->button292->TabIndex = 70;
			this->button292->Text = L"26_Thurusday";
			this->button292->UseVisualStyleBackColor = true;
			this->button292->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button293
			// 
			this->button293->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button293->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button293->ForeColor = System::Drawing::Color::Aqua;
			this->button293->Location = System::Drawing::Point(273, 197);
			this->button293->Name = L"button293";
			this->button293->Size = System::Drawing::Size(32, 22);
			this->button293->TabIndex = 69;
			this->button293->Text = L"25_Wednesday";
			this->button293->UseVisualStyleBackColor = true;
			this->button293->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button294
			// 
			this->button294->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button294->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button294->ForeColor = System::Drawing::Color::Aqua;
			this->button294->Location = System::Drawing::Point(179, 197);
			this->button294->Name = L"button294";
			this->button294->Size = System::Drawing::Size(32, 22);
			this->button294->TabIndex = 68;
			this->button294->Text = L"24_Tuesday";
			this->button294->UseVisualStyleBackColor = true;
			this->button294->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button295
			// 
			this->button295->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button295->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button295->ForeColor = System::Drawing::Color::Aqua;
			this->button295->Location = System::Drawing::Point(91, 197);
			this->button295->Name = L"button295";
			this->button295->Size = System::Drawing::Size(32, 22);
			this->button295->TabIndex = 67;
			this->button295->Text = L"23_Monday";
			this->button295->UseVisualStyleBackColor = true;
			this->button295->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button296
			// 
			this->button296->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button296->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button296->ForeColor = System::Drawing::Color::Aqua;
			this->button296->Location = System::Drawing::Point(9, 197);
			this->button296->Name = L"button296";
			this->button296->Size = System::Drawing::Size(32, 22);
			this->button296->TabIndex = 66;
			this->button296->Text = L"22_Sunday";
			this->button296->UseVisualStyleBackColor = true;
			this->button296->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button297
			// 
			this->button297->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button297->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button297->ForeColor = System::Drawing::Color::Aqua;
			this->button297->Location = System::Drawing::Point(545, 148);
			this->button297->Name = L"button297";
			this->button297->Size = System::Drawing::Size(32, 22);
			this->button297->TabIndex = 65;
			this->button297->Text = L"21_Saturday";
			this->button297->UseVisualStyleBackColor = true;
			this->button297->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button298
			// 
			this->button298->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button298->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button298->ForeColor = System::Drawing::Color::Aqua;
			this->button298->Location = System::Drawing::Point(475, 148);
			this->button298->Name = L"button298";
			this->button298->Size = System::Drawing::Size(32, 22);
			this->button298->TabIndex = 64;
			this->button298->Text = L"20_Friday";
			this->button298->UseVisualStyleBackColor = true;
			this->button298->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button299
			// 
			this->button299->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button299->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button299->ForeColor = System::Drawing::Color::Aqua;
			this->button299->Location = System::Drawing::Point(380, 148);
			this->button299->Name = L"button299";
			this->button299->Size = System::Drawing::Size(32, 22);
			this->button299->TabIndex = 63;
			this->button299->Text = L"19_Thurusday";
			this->button299->UseVisualStyleBackColor = true;
			this->button299->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button300
			// 
			this->button300->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button300->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button300->ForeColor = System::Drawing::Color::Aqua;
			this->button300->Location = System::Drawing::Point(273, 148);
			this->button300->Name = L"button300";
			this->button300->Size = System::Drawing::Size(32, 22);
			this->button300->TabIndex = 62;
			this->button300->Text = L"18_Wednesday";
			this->button300->UseVisualStyleBackColor = true;
			this->button300->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button301
			// 
			this->button301->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button301->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button301->ForeColor = System::Drawing::Color::Aqua;
			this->button301->Location = System::Drawing::Point(179, 148);
			this->button301->Name = L"button301";
			this->button301->Size = System::Drawing::Size(32, 22);
			this->button301->TabIndex = 61;
			this->button301->Text = L"17_Tuesday";
			this->button301->UseVisualStyleBackColor = true;
			this->button301->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button302
			// 
			this->button302->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button302->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button302->ForeColor = System::Drawing::Color::Aqua;
			this->button302->Location = System::Drawing::Point(91, 148);
			this->button302->Name = L"button302";
			this->button302->Size = System::Drawing::Size(32, 22);
			this->button302->TabIndex = 60;
			this->button302->Text = L"16_Monday";
			this->button302->UseVisualStyleBackColor = true;
			this->button302->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button303
			// 
			this->button303->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button303->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button303->ForeColor = System::Drawing::Color::Aqua;
			this->button303->Location = System::Drawing::Point(9, 148);
			this->button303->Name = L"button303";
			this->button303->Size = System::Drawing::Size(32, 22);
			this->button303->TabIndex = 46;
			this->button303->Text = L"15_Sunday";
			this->button303->UseVisualStyleBackColor = true;
			this->button303->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button304
			// 
			this->button304->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button304->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button304->ForeColor = System::Drawing::Color::Aqua;
			this->button304->Location = System::Drawing::Point(545, 98);
			this->button304->Name = L"button304";
			this->button304->Size = System::Drawing::Size(32, 22);
			this->button304->TabIndex = 59;
			this->button304->Text = L"14_Saturday";
			this->button304->UseVisualStyleBackColor = true;
			this->button304->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button305
			// 
			this->button305->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button305->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button305->ForeColor = System::Drawing::Color::Aqua;
			this->button305->Location = System::Drawing::Point(475, 98);
			this->button305->Name = L"button305";
			this->button305->Size = System::Drawing::Size(32, 22);
			this->button305->TabIndex = 58;
			this->button305->Text = L"13_Friday";
			this->button305->UseVisualStyleBackColor = true;
			this->button305->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button306
			// 
			this->button306->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button306->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button306->ForeColor = System::Drawing::Color::Aqua;
			this->button306->Location = System::Drawing::Point(380, 98);
			this->button306->Name = L"button306";
			this->button306->Size = System::Drawing::Size(32, 22);
			this->button306->TabIndex = 57;
			this->button306->Text = L"12_Thurusday";
			this->button306->UseVisualStyleBackColor = true;
			this->button306->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button307
			// 
			this->button307->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button307->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button307->ForeColor = System::Drawing::Color::Aqua;
			this->button307->Location = System::Drawing::Point(273, 98);
			this->button307->Name = L"button307";
			this->button307->Size = System::Drawing::Size(32, 22);
			this->button307->TabIndex = 56;
			this->button307->Text = L"11_Wednesday";
			this->button307->UseVisualStyleBackColor = true;
			this->button307->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button308
			// 
			this->button308->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button308->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button308->ForeColor = System::Drawing::Color::Aqua;
			this->button308->Location = System::Drawing::Point(179, 98);
			this->button308->Name = L"button308";
			this->button308->Size = System::Drawing::Size(32, 22);
			this->button308->TabIndex = 55;
			this->button308->Text = L"10_Tuesday";
			this->button308->UseVisualStyleBackColor = true;
			this->button308->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button309
			// 
			this->button309->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button309->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button309->ForeColor = System::Drawing::Color::Aqua;
			this->button309->Location = System::Drawing::Point(91, 98);
			this->button309->Name = L"button309";
			this->button309->Size = System::Drawing::Size(32, 22);
			this->button309->TabIndex = 54;
			this->button309->Text = L"09_Monday";
			this->button309->UseVisualStyleBackColor = true;
			this->button309->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button310
			// 
			this->button310->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button310->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button310->ForeColor = System::Drawing::Color::Aqua;
			this->button310->Location = System::Drawing::Point(9, 98);
			this->button310->Name = L"button310";
			this->button310->Size = System::Drawing::Size(32, 22);
			this->button310->TabIndex = 53;
			this->button310->Text = L"08_Sunday";
			this->button310->UseVisualStyleBackColor = true;
			this->button310->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button311
			// 
			this->button311->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button311->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button311->ForeColor = System::Drawing::Color::Aqua;
			this->button311->Location = System::Drawing::Point(545, 52);
			this->button311->Name = L"button311";
			this->button311->Size = System::Drawing::Size(32, 22);
			this->button311->TabIndex = 52;
			this->button311->Text = L"07_Saturday";
			this->button311->UseVisualStyleBackColor = true;
			this->button311->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button312
			// 
			this->button312->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button312->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button312->ForeColor = System::Drawing::Color::Aqua;
			this->button312->Location = System::Drawing::Point(475, 52);
			this->button312->Name = L"button312";
			this->button312->Size = System::Drawing::Size(32, 22);
			this->button312->TabIndex = 51;
			this->button312->Text = L"06_Friday";
			this->button312->UseVisualStyleBackColor = true;
			this->button312->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button313
			// 
			this->button313->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button313->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button313->ForeColor = System::Drawing::Color::Aqua;
			this->button313->Location = System::Drawing::Point(380, 52);
			this->button313->Name = L"button313";
			this->button313->Size = System::Drawing::Size(32, 22);
			this->button313->TabIndex = 50;
			this->button313->Text = L"05_Thurusday";
			this->button313->UseVisualStyleBackColor = true;
			this->button313->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button314
			// 
			this->button314->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button314->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button314->ForeColor = System::Drawing::Color::Aqua;
			this->button314->Location = System::Drawing::Point(273, 52);
			this->button314->Name = L"button314";
			this->button314->Size = System::Drawing::Size(32, 22);
			this->button314->TabIndex = 49;
			this->button314->Text = L"04_Wednesday";
			this->button314->UseVisualStyleBackColor = true;
			this->button314->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button315
			// 
			this->button315->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button315->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button315->ForeColor = System::Drawing::Color::Aqua;
			this->button315->Location = System::Drawing::Point(179, 52);
			this->button315->Name = L"button315";
			this->button315->Size = System::Drawing::Size(32, 22);
			this->button315->TabIndex = 48;
			this->button315->Text = L"03_Tuesday";
			this->button315->UseVisualStyleBackColor = true;
			this->button315->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button316
			// 
			this->button316->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button316->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button316->ForeColor = System::Drawing::Color::Aqua;
			this->button316->Location = System::Drawing::Point(91, 52);
			this->button316->Name = L"button316";
			this->button316->Size = System::Drawing::Size(32, 22);
			this->button316->TabIndex = 47;
			this->button316->Text = L"02_Monday";
			this->button316->UseVisualStyleBackColor = true;
			this->button316->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button317
			// 
			this->button317->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button317->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button317->ForeColor = System::Drawing::Color::Aqua;
			this->button317->Location = System::Drawing::Point(9, 52);
			this->button317->Name = L"button317";
			this->button317->Size = System::Drawing::Size(32, 22);
			this->button317->TabIndex = 45;
			this->button317->Text = L"01_Sunday";
			this->button317->UseVisualStyleBackColor = true;
			this->button317->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label95->ForeColor = System::Drawing::Color::Aqua;
			this->label95->Location = System::Drawing::Point(-7, 36);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(835, 13);
			this->label95->TabIndex = 14;
			this->label95->Text = resources->GetString(L"label95.Text");
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label71->ForeColor = System::Drawing::Color::Aqua;
			this->label71->Location = System::Drawing::Point(88, 14);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(51, 13);
			this->label71->TabIndex = 13;
			this->label71->Text = L"Monday";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label72->ForeColor = System::Drawing::Color::Aqua;
			this->label72->Location = System::Drawing::Point(176, 14);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(55, 13);
			this->label72->TabIndex = 12;
			this->label72->Text = L"Tuesday";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label73->ForeColor = System::Drawing::Color::Aqua;
			this->label73->Location = System::Drawing::Point(270, 14);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(73, 13);
			this->label73->TabIndex = 11;
			this->label73->Text = L"Wednesday";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label74->ForeColor = System::Drawing::Color::Aqua;
			this->label74->Location = System::Drawing::Point(377, 14);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(66, 13);
			this->label74->TabIndex = 10;
			this->label74->Text = L"Thurusday";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label75->ForeColor = System::Drawing::Color::Aqua;
			this->label75->Location = System::Drawing::Point(542, 14);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(57, 13);
			this->label75->TabIndex = 9;
			this->label75->Text = L"Saturday";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label76->ForeColor = System::Drawing::Color::Aqua;
			this->label76->Location = System::Drawing::Point(472, 14);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(41, 13);
			this->label76->TabIndex = 8;
			this->label76->Text = L"Friday";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label77->ForeColor = System::Drawing::Color::Aqua;
			this->label77->Location = System::Drawing::Point(6, 14);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(49, 13);
			this->label77->TabIndex = 7;
			this->label77->Text = L"Sunday";
			// 
			// tabPage12
			// 
			this->tabPage12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage12.BackgroundImage")));
			this->tabPage12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage12->Controls->Add(this->button319);
			this->tabPage12->Controls->Add(this->button320);
			this->tabPage12->Controls->Add(this->button321);
			this->tabPage12->Controls->Add(this->button322);
			this->tabPage12->Controls->Add(this->button323);
			this->tabPage12->Controls->Add(this->button324);
			this->tabPage12->Controls->Add(this->button325);
			this->tabPage12->Controls->Add(this->button326);
			this->tabPage12->Controls->Add(this->button327);
			this->tabPage12->Controls->Add(this->button328);
			this->tabPage12->Controls->Add(this->button329);
			this->tabPage12->Controls->Add(this->button330);
			this->tabPage12->Controls->Add(this->button331);
			this->tabPage12->Controls->Add(this->button332);
			this->tabPage12->Controls->Add(this->button333);
			this->tabPage12->Controls->Add(this->button334);
			this->tabPage12->Controls->Add(this->button335);
			this->tabPage12->Controls->Add(this->button336);
			this->tabPage12->Controls->Add(this->button337);
			this->tabPage12->Controls->Add(this->button338);
			this->tabPage12->Controls->Add(this->button339);
			this->tabPage12->Controls->Add(this->button340);
			this->tabPage12->Controls->Add(this->button341);
			this->tabPage12->Controls->Add(this->button342);
			this->tabPage12->Controls->Add(this->button343);
			this->tabPage12->Controls->Add(this->button344);
			this->tabPage12->Controls->Add(this->button345);
			this->tabPage12->Controls->Add(this->button346);
			this->tabPage12->Controls->Add(this->button347);
			this->tabPage12->Controls->Add(this->button348);
			this->tabPage12->Controls->Add(this->label96);
			this->tabPage12->Controls->Add(this->label78);
			this->tabPage12->Controls->Add(this->label79);
			this->tabPage12->Controls->Add(this->label80);
			this->tabPage12->Controls->Add(this->label81);
			this->tabPage12->Controls->Add(this->label82);
			this->tabPage12->Controls->Add(this->label83);
			this->tabPage12->Controls->Add(this->label84);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(597, 326);
			this->tabPage12->TabIndex = 11;
			this->tabPage12->Text = L"November";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// button319
			// 
			this->button319->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button319->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button319->ForeColor = System::Drawing::Color::Aqua;
			this->button319->Location = System::Drawing::Point(380, 244);
			this->button319->Name = L"button319";
			this->button319->Size = System::Drawing::Size(32, 22);
			this->button319->TabIndex = 136;
			this->button319->Text = L"30_Thurusday";
			this->button319->UseVisualStyleBackColor = true;
			this->button319->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button320
			// 
			this->button320->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button320->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button320->ForeColor = System::Drawing::Color::Aqua;
			this->button320->Location = System::Drawing::Point(273, 244);
			this->button320->Name = L"button320";
			this->button320->Size = System::Drawing::Size(32, 22);
			this->button320->TabIndex = 135;
			this->button320->Text = L"29_Wednesday";
			this->button320->UseVisualStyleBackColor = true;
			this->button320->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button321
			// 
			this->button321->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button321->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button321->ForeColor = System::Drawing::Color::Aqua;
			this->button321->Location = System::Drawing::Point(179, 244);
			this->button321->Name = L"button321";
			this->button321->Size = System::Drawing::Size(32, 22);
			this->button321->TabIndex = 134;
			this->button321->Text = L"28_Tuesday";
			this->button321->UseVisualStyleBackColor = true;
			this->button321->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button322
			// 
			this->button322->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button322->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button322->ForeColor = System::Drawing::Color::Aqua;
			this->button322->Location = System::Drawing::Point(91, 244);
			this->button322->Name = L"button322";
			this->button322->Size = System::Drawing::Size(32, 22);
			this->button322->TabIndex = 133;
			this->button322->Text = L"27_Monday";
			this->button322->UseVisualStyleBackColor = true;
			this->button322->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button323
			// 
			this->button323->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button323->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button323->ForeColor = System::Drawing::Color::Aqua;
			this->button323->Location = System::Drawing::Point(9, 244);
			this->button323->Name = L"button323";
			this->button323->Size = System::Drawing::Size(32, 22);
			this->button323->TabIndex = 132;
			this->button323->Text = L"26_Sunday";
			this->button323->UseVisualStyleBackColor = true;
			this->button323->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button324
			// 
			this->button324->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button324->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button324->ForeColor = System::Drawing::Color::Aqua;
			this->button324->Location = System::Drawing::Point(545, 197);
			this->button324->Name = L"button324";
			this->button324->Size = System::Drawing::Size(32, 22);
			this->button324->TabIndex = 131;
			this->button324->Text = L"25_Saturday";
			this->button324->UseVisualStyleBackColor = true;
			this->button324->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button325
			// 
			this->button325->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button325->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button325->ForeColor = System::Drawing::Color::Aqua;
			this->button325->Location = System::Drawing::Point(475, 197);
			this->button325->Name = L"button325";
			this->button325->Size = System::Drawing::Size(32, 22);
			this->button325->TabIndex = 130;
			this->button325->Text = L"24_Friday";
			this->button325->UseVisualStyleBackColor = true;
			this->button325->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button326
			// 
			this->button326->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button326->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button326->ForeColor = System::Drawing::Color::Aqua;
			this->button326->Location = System::Drawing::Point(380, 197);
			this->button326->Name = L"button326";
			this->button326->Size = System::Drawing::Size(32, 22);
			this->button326->TabIndex = 129;
			this->button326->Text = L"23_Thurusday";
			this->button326->UseVisualStyleBackColor = true;
			this->button326->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button327
			// 
			this->button327->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button327->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button327->ForeColor = System::Drawing::Color::Aqua;
			this->button327->Location = System::Drawing::Point(273, 197);
			this->button327->Name = L"button327";
			this->button327->Size = System::Drawing::Size(32, 22);
			this->button327->TabIndex = 128;
			this->button327->Text = L"22_Wednesday";
			this->button327->UseVisualStyleBackColor = true;
			this->button327->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button328
			// 
			this->button328->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button328->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button328->ForeColor = System::Drawing::Color::Aqua;
			this->button328->Location = System::Drawing::Point(179, 197);
			this->button328->Name = L"button328";
			this->button328->Size = System::Drawing::Size(32, 22);
			this->button328->TabIndex = 127;
			this->button328->Text = L"21_Tuesday";
			this->button328->UseVisualStyleBackColor = true;
			this->button328->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button329
			// 
			this->button329->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button329->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button329->ForeColor = System::Drawing::Color::Aqua;
			this->button329->Location = System::Drawing::Point(91, 197);
			this->button329->Name = L"button329";
			this->button329->Size = System::Drawing::Size(32, 22);
			this->button329->TabIndex = 126;
			this->button329->Text = L"20_Monday";
			this->button329->UseVisualStyleBackColor = true;
			this->button329->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button330
			// 
			this->button330->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button330->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button330->ForeColor = System::Drawing::Color::Aqua;
			this->button330->Location = System::Drawing::Point(9, 197);
			this->button330->Name = L"button330";
			this->button330->Size = System::Drawing::Size(32, 22);
			this->button330->TabIndex = 125;
			this->button330->Text = L"19_Sunday";
			this->button330->UseVisualStyleBackColor = true;
			this->button330->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button331
			// 
			this->button331->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button331->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button331->ForeColor = System::Drawing::Color::Aqua;
			this->button331->Location = System::Drawing::Point(545, 148);
			this->button331->Name = L"button331";
			this->button331->Size = System::Drawing::Size(32, 22);
			this->button331->TabIndex = 124;
			this->button331->Text = L"18_Saturday";
			this->button331->UseVisualStyleBackColor = true;
			this->button331->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button332
			// 
			this->button332->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button332->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button332->ForeColor = System::Drawing::Color::Aqua;
			this->button332->Location = System::Drawing::Point(475, 148);
			this->button332->Name = L"button332";
			this->button332->Size = System::Drawing::Size(32, 22);
			this->button332->TabIndex = 123;
			this->button332->Text = L"17_Friday";
			this->button332->UseVisualStyleBackColor = true;
			this->button332->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button333
			// 
			this->button333->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button333->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button333->ForeColor = System::Drawing::Color::Aqua;
			this->button333->Location = System::Drawing::Point(380, 148);
			this->button333->Name = L"button333";
			this->button333->Size = System::Drawing::Size(32, 22);
			this->button333->TabIndex = 122;
			this->button333->Text = L"16_Thurusday";
			this->button333->UseVisualStyleBackColor = true;
			this->button333->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button334
			// 
			this->button334->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button334->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button334->ForeColor = System::Drawing::Color::Aqua;
			this->button334->Location = System::Drawing::Point(273, 148);
			this->button334->Name = L"button334";
			this->button334->Size = System::Drawing::Size(32, 22);
			this->button334->TabIndex = 121;
			this->button334->Text = L"15_Wednesday";
			this->button334->UseVisualStyleBackColor = true;
			this->button334->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button335
			// 
			this->button335->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button335->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button335->ForeColor = System::Drawing::Color::Aqua;
			this->button335->Location = System::Drawing::Point(179, 148);
			this->button335->Name = L"button335";
			this->button335->Size = System::Drawing::Size(32, 22);
			this->button335->TabIndex = 120;
			this->button335->Text = L"14_Tuesday";
			this->button335->UseVisualStyleBackColor = true;
			this->button335->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button336
			// 
			this->button336->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button336->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button336->ForeColor = System::Drawing::Color::Aqua;
			this->button336->Location = System::Drawing::Point(91, 148);
			this->button336->Name = L"button336";
			this->button336->Size = System::Drawing::Size(32, 22);
			this->button336->TabIndex = 119;
			this->button336->Text = L"13_Monday";
			this->button336->UseVisualStyleBackColor = true;
			this->button336->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button337
			// 
			this->button337->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button337->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button337->ForeColor = System::Drawing::Color::Aqua;
			this->button337->Location = System::Drawing::Point(9, 148);
			this->button337->Name = L"button337";
			this->button337->Size = System::Drawing::Size(32, 22);
			this->button337->TabIndex = 107;
			this->button337->Text = L"12_Sunday";
			this->button337->UseVisualStyleBackColor = true;
			this->button337->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button338
			// 
			this->button338->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button338->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button338->ForeColor = System::Drawing::Color::Aqua;
			this->button338->Location = System::Drawing::Point(545, 98);
			this->button338->Name = L"button338";
			this->button338->Size = System::Drawing::Size(32, 22);
			this->button338->TabIndex = 118;
			this->button338->Text = L"11_Saturday";
			this->button338->UseVisualStyleBackColor = true;
			this->button338->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button339
			// 
			this->button339->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button339->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button339->ForeColor = System::Drawing::Color::Aqua;
			this->button339->Location = System::Drawing::Point(475, 98);
			this->button339->Name = L"button339";
			this->button339->Size = System::Drawing::Size(32, 22);
			this->button339->TabIndex = 117;
			this->button339->Text = L"10_Friday";
			this->button339->UseVisualStyleBackColor = true;
			this->button339->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button340
			// 
			this->button340->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button340->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button340->ForeColor = System::Drawing::Color::Aqua;
			this->button340->Location = System::Drawing::Point(380, 98);
			this->button340->Name = L"button340";
			this->button340->Size = System::Drawing::Size(32, 22);
			this->button340->TabIndex = 116;
			this->button340->Text = L"09_Thurusday";
			this->button340->UseVisualStyleBackColor = true;
			this->button340->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button341
			// 
			this->button341->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button341->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button341->ForeColor = System::Drawing::Color::Aqua;
			this->button341->Location = System::Drawing::Point(273, 98);
			this->button341->Name = L"button341";
			this->button341->Size = System::Drawing::Size(32, 22);
			this->button341->TabIndex = 115;
			this->button341->Text = L"08_Wednesday";
			this->button341->UseVisualStyleBackColor = true;
			this->button341->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button342
			// 
			this->button342->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button342->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button342->ForeColor = System::Drawing::Color::Aqua;
			this->button342->Location = System::Drawing::Point(179, 98);
			this->button342->Name = L"button342";
			this->button342->Size = System::Drawing::Size(32, 22);
			this->button342->TabIndex = 114;
			this->button342->Text = L"07_Tuesday";
			this->button342->UseVisualStyleBackColor = true;
			this->button342->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button343
			// 
			this->button343->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button343->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button343->ForeColor = System::Drawing::Color::Aqua;
			this->button343->Location = System::Drawing::Point(91, 98);
			this->button343->Name = L"button343";
			this->button343->Size = System::Drawing::Size(32, 22);
			this->button343->TabIndex = 113;
			this->button343->Text = L"06_Monday";
			this->button343->UseVisualStyleBackColor = true;
			this->button343->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button344
			// 
			this->button344->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button344->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button344->ForeColor = System::Drawing::Color::Aqua;
			this->button344->Location = System::Drawing::Point(9, 98);
			this->button344->Name = L"button344";
			this->button344->Size = System::Drawing::Size(32, 22);
			this->button344->TabIndex = 112;
			this->button344->Text = L"05_Sunday";
			this->button344->UseVisualStyleBackColor = true;
			this->button344->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button345
			// 
			this->button345->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button345->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button345->ForeColor = System::Drawing::Color::Aqua;
			this->button345->Location = System::Drawing::Point(545, 52);
			this->button345->Name = L"button345";
			this->button345->Size = System::Drawing::Size(32, 22);
			this->button345->TabIndex = 111;
			this->button345->Text = L"04_Saturday";
			this->button345->UseVisualStyleBackColor = true;
			this->button345->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button346
			// 
			this->button346->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button346->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button346->ForeColor = System::Drawing::Color::Aqua;
			this->button346->Location = System::Drawing::Point(475, 52);
			this->button346->Name = L"button346";
			this->button346->Size = System::Drawing::Size(32, 22);
			this->button346->TabIndex = 110;
			this->button346->Text = L"03_Friday";
			this->button346->UseVisualStyleBackColor = true;
			this->button346->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button347
			// 
			this->button347->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button347->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button347->ForeColor = System::Drawing::Color::Aqua;
			this->button347->Location = System::Drawing::Point(380, 52);
			this->button347->Name = L"button347";
			this->button347->Size = System::Drawing::Size(32, 22);
			this->button347->TabIndex = 109;
			this->button347->Text = L"02_Thurusday";
			this->button347->UseVisualStyleBackColor = true;
			this->button347->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button348
			// 
			this->button348->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button348->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button348->ForeColor = System::Drawing::Color::Aqua;
			this->button348->Location = System::Drawing::Point(273, 52);
			this->button348->Name = L"button348";
			this->button348->Size = System::Drawing::Size(32, 22);
			this->button348->TabIndex = 108;
			this->button348->Text = L"01_Wednesday";
			this->button348->UseVisualStyleBackColor = true;
			this->button348->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label96->ForeColor = System::Drawing::Color::Aqua;
			this->label96->Location = System::Drawing::Point(-7, 36);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(835, 13);
			this->label96->TabIndex = 14;
			this->label96->Text = resources->GetString(L"label96.Text");
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label78->ForeColor = System::Drawing::Color::Aqua;
			this->label78->Location = System::Drawing::Point(88, 14);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(51, 13);
			this->label78->TabIndex = 13;
			this->label78->Text = L"Monday";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label79->ForeColor = System::Drawing::Color::Aqua;
			this->label79->Location = System::Drawing::Point(176, 14);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(55, 13);
			this->label79->TabIndex = 12;
			this->label79->Text = L"Tuesday";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label80->ForeColor = System::Drawing::Color::Aqua;
			this->label80->Location = System::Drawing::Point(270, 14);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(73, 13);
			this->label80->TabIndex = 11;
			this->label80->Text = L"Wednesday";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label81->ForeColor = System::Drawing::Color::Aqua;
			this->label81->Location = System::Drawing::Point(377, 14);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(66, 13);
			this->label81->TabIndex = 10;
			this->label81->Text = L"Thurusday";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label82->ForeColor = System::Drawing::Color::Aqua;
			this->label82->Location = System::Drawing::Point(542, 14);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(57, 13);
			this->label82->TabIndex = 9;
			this->label82->Text = L"Saturday";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label83->ForeColor = System::Drawing::Color::Aqua;
			this->label83->Location = System::Drawing::Point(472, 14);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(41, 13);
			this->label83->TabIndex = 8;
			this->label83->Text = L"Friday";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label84->ForeColor = System::Drawing::Color::Aqua;
			this->label84->Location = System::Drawing::Point(6, 14);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(49, 13);
			this->label84->TabIndex = 7;
			this->label84->Text = L"Sunday";
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->button378);
			this->tabPage1->Controls->Add(this->button318);
			this->tabPage1->Controls->Add(this->button349);
			this->tabPage1->Controls->Add(this->button350);
			this->tabPage1->Controls->Add(this->button351);
			this->tabPage1->Controls->Add(this->button352);
			this->tabPage1->Controls->Add(this->button353);
			this->tabPage1->Controls->Add(this->button354);
			this->tabPage1->Controls->Add(this->button355);
			this->tabPage1->Controls->Add(this->button356);
			this->tabPage1->Controls->Add(this->button357);
			this->tabPage1->Controls->Add(this->button358);
			this->tabPage1->Controls->Add(this->button359);
			this->tabPage1->Controls->Add(this->button360);
			this->tabPage1->Controls->Add(this->button361);
			this->tabPage1->Controls->Add(this->button362);
			this->tabPage1->Controls->Add(this->button363);
			this->tabPage1->Controls->Add(this->button364);
			this->tabPage1->Controls->Add(this->button365);
			this->tabPage1->Controls->Add(this->button366);
			this->tabPage1->Controls->Add(this->button367);
			this->tabPage1->Controls->Add(this->button368);
			this->tabPage1->Controls->Add(this->button369);
			this->tabPage1->Controls->Add(this->button370);
			this->tabPage1->Controls->Add(this->button371);
			this->tabPage1->Controls->Add(this->button372);
			this->tabPage1->Controls->Add(this->button373);
			this->tabPage1->Controls->Add(this->button374);
			this->tabPage1->Controls->Add(this->button375);
			this->tabPage1->Controls->Add(this->button376);
			this->tabPage1->Controls->Add(this->button377);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label85);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(597, 326);
			this->tabPage1->TabIndex = 12;
			this->tabPage1->Text = L"December";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button378
			// 
			this->button378->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button378->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button378->ForeColor = System::Drawing::Color::Aqua;
			this->button378->Location = System::Drawing::Point(9, 286);
			this->button378->Name = L"button378";
			this->button378->Size = System::Drawing::Size(32, 22);
			this->button378->TabIndex = 237;
			this->button378->Text = L"31_Sunday";
			this->button378->UseVisualStyleBackColor = true;
			this->button378->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button318
			// 
			this->button318->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button318->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button318->ForeColor = System::Drawing::Color::Aqua;
			this->button318->Location = System::Drawing::Point(545, 242);
			this->button318->Name = L"button318";
			this->button318->Size = System::Drawing::Size(32, 22);
			this->button318->TabIndex = 236;
			this->button318->Text = L"30_Saturday";
			this->button318->UseVisualStyleBackColor = true;
			this->button318->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button349
			// 
			this->button349->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button349->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button349->ForeColor = System::Drawing::Color::Aqua;
			this->button349->Location = System::Drawing::Point(545, 195);
			this->button349->Name = L"button349";
			this->button349->Size = System::Drawing::Size(32, 22);
			this->button349->TabIndex = 235;
			this->button349->Text = L"23_Saturday";
			this->button349->UseVisualStyleBackColor = true;
			this->button349->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button350
			// 
			this->button350->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button350->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button350->ForeColor = System::Drawing::Color::Aqua;
			this->button350->Location = System::Drawing::Point(545, 146);
			this->button350->Name = L"button350";
			this->button350->Size = System::Drawing::Size(32, 22);
			this->button350->TabIndex = 234;
			this->button350->Text = L"16_Saturday";
			this->button350->UseVisualStyleBackColor = true;
			this->button350->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button351
			// 
			this->button351->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button351->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button351->ForeColor = System::Drawing::Color::Aqua;
			this->button351->Location = System::Drawing::Point(545, 96);
			this->button351->Name = L"button351";
			this->button351->Size = System::Drawing::Size(32, 22);
			this->button351->TabIndex = 233;
			this->button351->Text = L"09_Saturday";
			this->button351->UseVisualStyleBackColor = true;
			this->button351->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button352
			// 
			this->button352->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button352->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button352->ForeColor = System::Drawing::Color::Aqua;
			this->button352->Location = System::Drawing::Point(545, 50);
			this->button352->Name = L"button352";
			this->button352->Size = System::Drawing::Size(32, 22);
			this->button352->TabIndex = 232;
			this->button352->Text = L"02_Saturday";
			this->button352->UseVisualStyleBackColor = true;
			this->button352->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button353
			// 
			this->button353->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button353->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button353->ForeColor = System::Drawing::Color::Aqua;
			this->button353->Location = System::Drawing::Point(475, 242);
			this->button353->Name = L"button353";
			this->button353->Size = System::Drawing::Size(32, 22);
			this->button353->TabIndex = 231;
			this->button353->Text = L"29_Friday";
			this->button353->UseVisualStyleBackColor = true;
			this->button353->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button354
			// 
			this->button354->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button354->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button354->ForeColor = System::Drawing::Color::Aqua;
			this->button354->Location = System::Drawing::Point(380, 242);
			this->button354->Name = L"button354";
			this->button354->Size = System::Drawing::Size(32, 22);
			this->button354->TabIndex = 230;
			this->button354->Text = L"28_Thurusday";
			this->button354->UseVisualStyleBackColor = true;
			this->button354->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button355
			// 
			this->button355->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button355->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button355->ForeColor = System::Drawing::Color::Aqua;
			this->button355->Location = System::Drawing::Point(273, 242);
			this->button355->Name = L"button355";
			this->button355->Size = System::Drawing::Size(32, 22);
			this->button355->TabIndex = 229;
			this->button355->Text = L"27_Wednesday";
			this->button355->UseVisualStyleBackColor = true;
			this->button355->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button356
			// 
			this->button356->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button356->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button356->ForeColor = System::Drawing::Color::Aqua;
			this->button356->Location = System::Drawing::Point(179, 242);
			this->button356->Name = L"button356";
			this->button356->Size = System::Drawing::Size(32, 22);
			this->button356->TabIndex = 228;
			this->button356->Text = L"26_Tuesday";
			this->button356->UseVisualStyleBackColor = true;
			this->button356->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button357
			// 
			this->button357->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button357->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button357->ForeColor = System::Drawing::Color::Aqua;
			this->button357->Location = System::Drawing::Point(91, 242);
			this->button357->Name = L"button357";
			this->button357->Size = System::Drawing::Size(32, 22);
			this->button357->TabIndex = 227;
			this->button357->Text = L"25_Monday";
			this->button357->UseVisualStyleBackColor = true;
			this->button357->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button358
			// 
			this->button358->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button358->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button358->ForeColor = System::Drawing::Color::Aqua;
			this->button358->Location = System::Drawing::Point(9, 242);
			this->button358->Name = L"button358";
			this->button358->Size = System::Drawing::Size(32, 22);
			this->button358->TabIndex = 226;
			this->button358->Text = L"24_Sunday";
			this->button358->UseVisualStyleBackColor = true;
			this->button358->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button359
			// 
			this->button359->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button359->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button359->ForeColor = System::Drawing::Color::Aqua;
			this->button359->Location = System::Drawing::Point(475, 195);
			this->button359->Name = L"button359";
			this->button359->Size = System::Drawing::Size(32, 22);
			this->button359->TabIndex = 225;
			this->button359->Text = L"22_Friday";
			this->button359->UseVisualStyleBackColor = true;
			this->button359->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button360
			// 
			this->button360->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button360->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button360->ForeColor = System::Drawing::Color::Aqua;
			this->button360->Location = System::Drawing::Point(380, 195);
			this->button360->Name = L"button360";
			this->button360->Size = System::Drawing::Size(32, 22);
			this->button360->TabIndex = 224;
			this->button360->Text = L"21_Thurusday";
			this->button360->UseVisualStyleBackColor = true;
			this->button360->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button361
			// 
			this->button361->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button361->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button361->ForeColor = System::Drawing::Color::Aqua;
			this->button361->Location = System::Drawing::Point(273, 195);
			this->button361->Name = L"button361";
			this->button361->Size = System::Drawing::Size(32, 22);
			this->button361->TabIndex = 223;
			this->button361->Text = L"20_Wednesday";
			this->button361->UseVisualStyleBackColor = true;
			this->button361->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button362
			// 
			this->button362->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button362->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button362->ForeColor = System::Drawing::Color::Aqua;
			this->button362->Location = System::Drawing::Point(179, 195);
			this->button362->Name = L"button362";
			this->button362->Size = System::Drawing::Size(32, 22);
			this->button362->TabIndex = 222;
			this->button362->Text = L"19_Tuesday";
			this->button362->UseVisualStyleBackColor = true;
			this->button362->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button363
			// 
			this->button363->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button363->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button363->ForeColor = System::Drawing::Color::Aqua;
			this->button363->Location = System::Drawing::Point(91, 195);
			this->button363->Name = L"button363";
			this->button363->Size = System::Drawing::Size(32, 22);
			this->button363->TabIndex = 221;
			this->button363->Text = L"18_Monday";
			this->button363->UseVisualStyleBackColor = true;
			this->button363->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button364
			// 
			this->button364->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button364->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button364->ForeColor = System::Drawing::Color::Aqua;
			this->button364->Location = System::Drawing::Point(9, 195);
			this->button364->Name = L"button364";
			this->button364->Size = System::Drawing::Size(32, 22);
			this->button364->TabIndex = 220;
			this->button364->Text = L"17_Sunday";
			this->button364->UseVisualStyleBackColor = true;
			this->button364->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button365
			// 
			this->button365->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button365->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button365->ForeColor = System::Drawing::Color::Aqua;
			this->button365->Location = System::Drawing::Point(475, 146);
			this->button365->Name = L"button365";
			this->button365->Size = System::Drawing::Size(32, 22);
			this->button365->TabIndex = 219;
			this->button365->Text = L"15_Friday";
			this->button365->UseVisualStyleBackColor = true;
			this->button365->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button366
			// 
			this->button366->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button366->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button366->ForeColor = System::Drawing::Color::Aqua;
			this->button366->Location = System::Drawing::Point(380, 146);
			this->button366->Name = L"button366";
			this->button366->Size = System::Drawing::Size(32, 22);
			this->button366->TabIndex = 218;
			this->button366->Text = L"14_Thurusday";
			this->button366->UseVisualStyleBackColor = true;
			this->button366->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button367
			// 
			this->button367->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button367->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button367->ForeColor = System::Drawing::Color::Aqua;
			this->button367->Location = System::Drawing::Point(273, 146);
			this->button367->Name = L"button367";
			this->button367->Size = System::Drawing::Size(32, 22);
			this->button367->TabIndex = 217;
			this->button367->Text = L"13_Wednesday";
			this->button367->UseVisualStyleBackColor = true;
			this->button367->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button368
			// 
			this->button368->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button368->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button368->ForeColor = System::Drawing::Color::Aqua;
			this->button368->Location = System::Drawing::Point(179, 146);
			this->button368->Name = L"button368";
			this->button368->Size = System::Drawing::Size(32, 22);
			this->button368->TabIndex = 216;
			this->button368->Text = L"12_Tuesday";
			this->button368->UseVisualStyleBackColor = true;
			this->button368->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button369
			// 
			this->button369->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button369->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button369->ForeColor = System::Drawing::Color::Aqua;
			this->button369->Location = System::Drawing::Point(91, 146);
			this->button369->Name = L"button369";
			this->button369->Size = System::Drawing::Size(32, 22);
			this->button369->TabIndex = 215;
			this->button369->Text = L"11_Monday";
			this->button369->UseVisualStyleBackColor = true;
			this->button369->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button370
			// 
			this->button370->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button370->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button370->ForeColor = System::Drawing::Color::Aqua;
			this->button370->Location = System::Drawing::Point(9, 146);
			this->button370->Name = L"button370";
			this->button370->Size = System::Drawing::Size(32, 22);
			this->button370->TabIndex = 214;
			this->button370->Text = L"10_Sunday";
			this->button370->UseVisualStyleBackColor = true;
			this->button370->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button371
			// 
			this->button371->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button371->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button371->ForeColor = System::Drawing::Color::Aqua;
			this->button371->Location = System::Drawing::Point(475, 96);
			this->button371->Name = L"button371";
			this->button371->Size = System::Drawing::Size(32, 22);
			this->button371->TabIndex = 213;
			this->button371->Text = L"08_Friday";
			this->button371->UseVisualStyleBackColor = true;
			this->button371->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button372
			// 
			this->button372->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button372->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button372->ForeColor = System::Drawing::Color::Aqua;
			this->button372->Location = System::Drawing::Point(380, 96);
			this->button372->Name = L"button372";
			this->button372->Size = System::Drawing::Size(32, 22);
			this->button372->TabIndex = 212;
			this->button372->Text = L"07_Thurusday";
			this->button372->UseVisualStyleBackColor = true;
			this->button372->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button373
			// 
			this->button373->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button373->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button373->ForeColor = System::Drawing::Color::Aqua;
			this->button373->Location = System::Drawing::Point(273, 96);
			this->button373->Name = L"button373";
			this->button373->Size = System::Drawing::Size(32, 22);
			this->button373->TabIndex = 211;
			this->button373->Text = L"06_Wednesday";
			this->button373->UseVisualStyleBackColor = true;
			this->button373->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button374
			// 
			this->button374->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button374->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button374->ForeColor = System::Drawing::Color::Aqua;
			this->button374->Location = System::Drawing::Point(179, 96);
			this->button374->Name = L"button374";
			this->button374->Size = System::Drawing::Size(32, 22);
			this->button374->TabIndex = 210;
			this->button374->Text = L"05_Tuesday";
			this->button374->UseVisualStyleBackColor = true;
			this->button374->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button375
			// 
			this->button375->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button375->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button375->ForeColor = System::Drawing::Color::Aqua;
			this->button375->Location = System::Drawing::Point(91, 96);
			this->button375->Name = L"button375";
			this->button375->Size = System::Drawing::Size(32, 22);
			this->button375->TabIndex = 209;
			this->button375->Text = L"04_Monday";
			this->button375->UseVisualStyleBackColor = true;
			this->button375->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button376
			// 
			this->button376->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button376->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button376->ForeColor = System::Drawing::Color::Aqua;
			this->button376->Location = System::Drawing::Point(9, 96);
			this->button376->Name = L"button376";
			this->button376->Size = System::Drawing::Size(32, 22);
			this->button376->TabIndex = 208;
			this->button376->Text = L"03_Sunday";
			this->button376->UseVisualStyleBackColor = true;
			this->button376->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// button377
			// 
			this->button377->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button377->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button377->ForeColor = System::Drawing::Color::Aqua;
			this->button377->Location = System::Drawing::Point(475, 50);
			this->button377->Name = L"button377";
			this->button377->Size = System::Drawing::Size(32, 22);
			this->button377->TabIndex = 207;
			this->button377->Text = L"01_Friday";
			this->button377->UseVisualStyleBackColor = true;
			this->button377->Click += gcnew System::EventHandler(this, &MyForm::anybutton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Aqua;
			this->label1->Location = System::Drawing::Point(-27, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(835, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Aqua;
			this->label2->Location = System::Drawing::Point(88, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Monday";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Aqua;
			this->label3->Location = System::Drawing::Point(176, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Tuesday";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Aqua;
			this->label4->Location = System::Drawing::Point(270, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Wednesday";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Aqua;
			this->label5->Location = System::Drawing::Point(377, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Thurusday";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Aqua;
			this->label6->Location = System::Drawing::Point(542, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Saturday";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Aqua;
			this->label7->Location = System::Drawing::Point(472, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Friday";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label85->ForeColor = System::Drawing::Color::Aqua;
			this->label85->Location = System::Drawing::Point(6, 12);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(49, 13);
			this->label85->TabIndex = 15;
			this->label85->Text = L"Sunday";
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->BackColor = System::Drawing::Color::Transparent;
			this->label97->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label97->ForeColor = System::Drawing::Color::Aqua;
			this->label97->Location = System::Drawing::Point(108, 9);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(493, 68);
			this->label97->TabIndex = 1;
			this->label97->Text = L"2017 Calendar";
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->BackColor = System::Drawing::Color::Transparent;
			this->label98->ForeColor = System::Drawing::Color::Cyan;
			this->label98->Location = System::Drawing::Point(41, 447);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(77, 13);
			this->label98->TabIndex = 2;
			this->label98->Text = L"Selected Day :";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(139, 445);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 3;
			
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->BackColor = System::Drawing::Color::Transparent;
			this->label101->ForeColor = System::Drawing::Color::Cyan;
			this->label101->Location = System::Drawing::Point(355, 447);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(134, 13);
			this->label101->TabIndex = 4;
			this->label101->Text = L"Enter a date (Day/Month) :";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(518, 445);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->BackColor = System::Drawing::Color::Transparent;
			this->label100->ForeColor = System::Drawing::Color::Cyan;
			this->label100->Location = System::Drawing::Point(355, 509);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(148, 13);
			this->label100->TabIndex = 6;
			this->label100->Text = L"The  day of the given date is :";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SkyBlue;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(518, 504);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(127, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->BackColor = System::Drawing::Color::Transparent;
			this->label99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label99->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label99->Location = System::Drawing::Point(40, 474);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(14, 20);
			this->label99->TabIndex = 9;
			this->label99->Text = L" ";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->BackColor = System::Drawing::Color::Transparent;
			this->label103->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label103->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label103->ForeColor = System::Drawing::Color::Aqua;
			this->label103->Location = System::Drawing::Point(779, 287);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(28, 13);
			this->label103->TabIndex = 12;
			this->label103->Text = L"Fajr";
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->BackColor = System::Drawing::Color::Transparent;
			this->label104->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label104->ForeColor = System::Drawing::Color::Aqua;
			this->label104->Location = System::Drawing::Point(765, 326);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(41, 13);
			this->label104->TabIndex = 13;
			this->label104->Text = L"Dhuhr";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->BackColor = System::Drawing::Color::Transparent;
			this->label105->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label105->ForeColor = System::Drawing::Color::Aqua;
			this->label105->Location = System::Drawing::Point(782, 370);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(25, 13);
			this->label105->TabIndex = 14;
			this->label105->Text = L"Asr";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->BackColor = System::Drawing::Color::Transparent;
			this->label106->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label106->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label106->ForeColor = System::Drawing::Color::Aqua;
			this->label106->Location = System::Drawing::Point(755, 410);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(52, 13);
			this->label106->TabIndex = 15;
			this->label106->Text = L"Maghrib";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->BackColor = System::Drawing::Color::Transparent;
			this->label107->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label107->ForeColor = System::Drawing::Color::Aqua;
			this->label107->Location = System::Drawing::Point(776, 453);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(31, 13);
			this->label107->TabIndex = 16;
			this->label107->Text = L"Isha";
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->BackColor = System::Drawing::Color::Transparent;
			this->label108->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label108->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label108->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label108->Location = System::Drawing::Point(739, 240);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(210, 31);
			this->label108->TabIndex = 17;
			this->label108->Text = L"Prayer Timings";
			// 
			// f
			// 
			this->f->BackColor = System::Drawing::Color::SkyBlue;
			this->f->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->f->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->f->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->f->Location = System::Drawing::Point(812, 285);
			this->f->Name = L"f";
			this->f->ReadOnly = true;
			this->f->Size = System::Drawing::Size(82, 18);
			this->f->TabIndex = 19;
			this->f->Text = L"03:54:00 AM";
			// 
			// d
			// 
			this->d->BackColor = System::Drawing::Color::SkyBlue;
			this->d->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->d->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->d->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->d->Location = System::Drawing::Point(812, 323);
			this->d->Name = L"d";
			this->d->ReadOnly = true;
			this->d->Size = System::Drawing::Size(83, 13);
			this->d->TabIndex = 20;
			this->d->Text = L"11:59:00 AM";
			// 
			// a
			// 
			this->a->BackColor = System::Drawing::Color::SkyBlue;
			this->a->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->a->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->a->Location = System::Drawing::Point(813, 367);
			this->a->Name = L"a";
			this->a->ReadOnly = true;
			this->a->Size = System::Drawing::Size(83, 13);
			this->a->TabIndex = 21;
			this->a->Text = L"03:35:00 PM";
			// 
			// m
			// 
			this->m->BackColor = System::Drawing::Color::SkyBlue;
			this->m->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->m->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->m->Location = System::Drawing::Point(813, 407);
			this->m->Name = L"m";
			this->m->ReadOnly = true;
			this->m->Size = System::Drawing::Size(83, 13);
			this->m->TabIndex = 22;
			this->m->Text = L"06:31:00 PM";
			// 
			// i
			// 
			this->i->BackColor = System::Drawing::Color::SkyBlue;
			this->i->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->i->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->i->Location = System::Drawing::Point(813, 450);
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Size = System::Drawing::Size(83, 13);
			this->i->TabIndex = 23;
			this->i->Text = L"07:53:00 PM";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(670, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(323, 231);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::Transparent;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 587);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1005, 22);
			this->statusStrip1->TabIndex = 27;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::SkyBlue;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// vid1
			// 
			this->vid1->Enabled = true;
			this->vid1->Location = System::Drawing::Point(670, 8);
			this->vid1->Name = L"vid1";
			this->vid1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"vid1.OcxState")));
			this->vid1->Size = System::Drawing::Size(323, 232);
			this->vid1->TabIndex = 28;
			this->vid1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1005, 609);
			this->Controls->Add(button380);
			this->Controls->Add(this->vid1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(button381);
			this->Controls->Add(this->i);
			this->Controls->Add(this->m);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->a);
			this->Controls->Add(this->d);
			this->Controls->Add(this->f);
			this->Controls->Add(this->label108);
			this->Controls->Add(this->label107);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->label104);
			this->Controls->Add(this->label103);
			this->Controls->Add(this->label99);
			this->Controls->Add(button379);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label100);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label101);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label98);
			this->Controls->Add(this->label97);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"2017 Calendar";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vid1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//occasions
private: System::Void anybutton_Click(System::Object^ sender, System::EventArgs^  e)		 
{                                                                                           
	Button^ btn = (Button^)sender;    
	textBox1->Text = btn->Text; 

	if ((Button^)sender == button1)
		label99->Text = "January 1 Bank Holiday";
	else if ((Button^)sender == button7)
		label99->Text = " Coptic Christmas Day";
	else if ((Button^)sender == button25)
		label99->Text = " Revolution Day January 25";
	else if ((Button^)sender == button68)
		label99->Text = "March equinox";
	else if ((Button^)sender == button67)
		label99->Text = "Mother's Day ";
	else if ((Button^)sender == button105)
		label99->Text = " Coptic Good Friday ";
	else if ((Button^)sender == button104)
		label99->Text = "Coptic Holy Saturday ";
	else if ((Button^)sender == button103)
		label99->Text = "Coptic Easter Sunday ";
	else if ((Button^)sender == button102)
		label99->Text = "Spring Festival ";
	else if ((Button^)sender == button94)
		label99->Text = "Sinai Liberation Day";
	else if ((Button^)sender == button151)
		label99->Text = "Labor Day ";
	else if ((Button^)sender == button159)
		label99->Text = "June Solstice ";
	else if ((Button^)sender == button154)
		label99->Text = "Eid el Fitr ";
	else if ((Button^)sender == button153)
		label99->Text = "End of Ramadan Day 2 ";
	else if ((Button^)sender == button152)
		label99->Text = "End of Ramadan Day 3 ";
	else if ((Button^)sender == button185)
		label99->Text = "June 30 Revolution ";
	else if ((Button^)sender == button215)
		label99->Text = "July 1 Bank Holiday ";
	else if ((Button^)sender == button193)
		label99->Text = "Revolution Day July 23 ";
	else if ((Button^)sender == button230)
		label99->Text = "Flooding of the Nile ";
	else if ((Button^)sender == button282)
		label99->Text = "Feast of the Sacrifice ";
	else if ((Button^)sender == button283)
		label99->Text = "Feast of the Sacrifice Day 2 ";
	else if ((Button^)sender == button280)
		label99->Text = "Feast of the Sacrifice Day 3 ";
	else if ((Button^)sender == button279)
		label99->Text = "Feast of the Sacrifice Day 4 ";
	else if ((Button^)sender == button272)
		label99->Text = "Coptic New Year ";
	else if ((Button^)sender == button261)
		label99->Text = "September equinox & Muharram ";
	else if ((Button^)sender == button312)
		label99->Text = "Armed Forces Day ";
	else if ((Button^)sender == button377)
		label99->Text = "Prophet Mohamed's birthday ";
	else if ((Button^)sender == button360)
		label99->Text = "December Solstice ";
	else
		label99->Text = " ";
}

		 // Searching for the given day 
private: System::Void button379_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ st = textBox2->Text;
	array<String^>^ result;
	array<Char>^ splitchar = { '/','-','_'};                         //Split the input 
	result = st->Split(splitchar, StringSplitOptions::None);

	
	if (result[0] == "01" || result[0] == "1" || result[0] == "8" ||
		result[0] == "08" || result[0] == "15" || result[0] == "22")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Sunday ";
		else if (result[1] == "2" || result[1] == "february" || result[1] == "feb")
			textBox3->Text = " Wednesday ";
		else if(result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "4" || result[1] == "april" )
			textBox3->Text = " Saturday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Monday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Saturday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Friday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Sunday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Friday ";
	}
	else if (result[0] == "29")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Sunday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "4" || result[1] == "april")
			textBox3->Text = " Saturday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Monday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Saturday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Friday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Sunday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Friday ";
	}
	else if (result[0] == "02" || result[0] == "2" || result[0] == "9" || result[0] == "09" || result[0] == "16" || result[0] == "23")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Monday ";
		else if (result[1] == "2" || result[1] == "february" || result[1] == "feb")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "4" || result[1] == "april")
			textBox3->Text = " Sunday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Friday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Sunday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Saturday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Monday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Saturday ";
	}
	else if (result[0] == "30")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Monday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "4" || result[1] == "april")
			textBox3->Text = " Sunday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Friday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Sunday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Saturday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Monday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Saturday ";
	}
	else if (result[0] == "03" || result[0] == "3" || result[0] == "10" || result[0] == "17" || result[0] == "24")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Tuesday ";
		else if (result[1] == "2" || result[1] == "february" || result[1] == "feb")
			textBox3->Text = " Friday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Friday ";
		else if (result[1] == "4" || result[1] == "april")
			textBox3->Text = " Monday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Saturday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Monday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Sunday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Friday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Sunday ";
	}
	else if (result[0] == "31")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Tuesday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Friday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Monday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Sunday ";
	}
	else if (result[0] == "04" || result[0] == "4" || result[0] == "11" || result[0] == "18" || result[0] == "25")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Wednesday ";
		else if (result[1] == "2" || result[1] == "february" || result[1] == "feb")
			textBox3->Text = " Saturday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Saturday ";
		else if (result[1] == "4" || result[1] == "april")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Sunday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Friday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Monday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Saturday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Monday ";
	}
	else if (result[0] == "05" || result[0] == "5" || result[0] == "12" || result[0] == "19" || result[0] == "26")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Thurusday ";
		else if (result[1] == "2" || result[1] == "february" || result[1] == "feb")
			textBox3->Text = " Sunday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Sunday ";
		else if (result[1] == "4" || result[1] == "april")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Friday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Monday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Saturday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Sunday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Tuesday ";
	}
	else if (result[0] == "06" || result[0] == "6" || result[0] == "13" || result[0] == "20" || result[0] == "27")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Friday ";
		else if (result[1] == "2" || result[1] == "february" || result[1] == "feb")
			textBox3->Text = " Monday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Monday ";
		else if (result[1] == "4" || result[1] == "april")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Saturday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Sunday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Friday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Monday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Wednesday ";
	}
	else if (result[0] == "07" || result[0] == "7" || result[0] == "14" || result[0] == "21" || result[0] == "28")
	{
		if ((result[1] == "1" || result[1] == "january" || result[1] == "jan"))
			textBox3->Text = " Saturday ";
		else if (result[1] == "2" || result[1] == "february" || result[1] == "feb")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "3" || result[1] == "march" || result[1] == "mar")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "4" || result[1] == "april")
			textBox3->Text = " Friday ";
		else if (result[1] == "5" || result[1] == "may")
			textBox3->Text = " Sunday ";
		else if (result[1] == "6" || result[1] == "june")
			textBox3->Text = " Wednesday ";
		else if (result[1] == "7" || result[1] == "july")
			textBox3->Text = " Friday ";
		else if (result[1] == "8" || result[1] == "august")
			textBox3->Text = " Monday ";
		else if (result[1] == "9" || result[1] == "september")
			textBox3->Text = " Thurusday ";
		else if (result[1] == "10" || result[1] == "october")
			textBox3->Text = " Saturday ";
		else if (result[1] == "11" || result[1] == "november")
			textBox3->Text = " Tuesday ";
		else if (result[1] == "12" || result[1] == "december")
			textBox3->Text = " Thurusday ";
	}
	else 
		MessageBox::Show("Wrong input type", "Error!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
// System Date & Time
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	toolStripStatusLabel1->Text = DateTime::Now.ToString("hh:mm:ss tt");
	if (toolStripStatusLabel1->Text == f->Text || toolStripStatusLabel1->Text == d->Text ||
		toolStripStatusLabel1->Text == a->Text || toolStripStatusLabel1->Text == m->Text ||
		toolStripStatusLabel1->Text == i->Text)
	{
		vid1->Visible = true;
		vid1->Ctlcontrols->play();
	}
	if (toolStripStatusLabel1->Text == "03:54:24 AM"|| toolStripStatusLabel1->Text == "11:59:24 AM"||
		toolStripStatusLabel1->Text == "03:35:24 PM"|| toolStripStatusLabel1->Text == "06:31:24 PM" ||
		toolStripStatusLabel1->Text == "07:53:24 PM")
		vid1->Visible = false;
	


}
// Add events button
private: System::Void button381_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^frm = gcnew MyForm2();
	frm->ShowDialog();
}


//Exit Warning
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("Do you really want to exit?", "Calendar", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		Application::ExitThread();
	else
		e->Cancel = true;
}
private: System::Void button380_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox3->Text = "";
	textBox2->Text = "";
}

};
}
