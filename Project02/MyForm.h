#pragma once

namespace Project02 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ äàí³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ â³äêðèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàêðèòèToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ äàí³ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïðîÀâòîðàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïðîÏðîãðàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñèòèToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äàí³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêðèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàêðèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äàí³ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðîÀâòîðàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðîÏðîãðàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->î÷èñèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label1->Location = System::Drawing::Point(43, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ï²Ï";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label2->Location = System::Drawing::Point(43, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Êóðñ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label3->Location = System::Drawing::Point(43, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ãðóïà";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label4->Location = System::Drawing::Point(43, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 26);
			this->label4->TabIndex = 3;
			this->label4->Text = L"²íôîðìàòèêà";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label5->Location = System::Drawing::Point(43, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(233, 26);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ìàòåìàòè÷íèé àíàë³ç";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label6->Location = System::Drawing::Point(43, 325);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(217, 26);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ìàòåìàòè÷íà ëîã³êà";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label7->Location = System::Drawing::Point(43, 370);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(269, 26);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Êîíñòðóêòèâíà ãåîìåòð³ÿ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label8->Location = System::Drawing::Point(43, 411);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 26);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Ô³ëîñîô³ÿ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label9->Location = System::Drawing::Point(555, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(296, 26);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Ñòóäåíòè, ÿê³ ñêëàëè çàë³êè";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label10->Location = System::Drawing::Point(555, 234);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(314, 26);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Ñòóäåíòè, ÿê³ íå ñêëàëè çàë³ê";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 22);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 22);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(145, 130);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(264, 22);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(339, 238);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 22);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(339, 283);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(70, 22);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(339, 329);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(70, 22);
			this->textBox6->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(339, 374);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(70, 22);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(339, 415);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(70, 22);
			this->textBox8->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(560, 72);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(425, 140);
			this->textBox9->TabIndex = 18;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->äàí³ToolStripMenuItem,
					this->äàí³ToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1049, 28);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äàí³ToolStripMenuItem
			// 
			this->äàí³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->â³äêðèòèToolStripMenuItem,
					this->çàêðèòèToolStripMenuItem, this->î÷èñèòèToolStripMenuItem
			});
			this->äàí³ToolStripMenuItem->Name = L"äàí³ToolStripMenuItem";
			this->äàí³ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->äàí³ToolStripMenuItem->Text = L"Ôàéë";
			// 
			// â³äêðèòèToolStripMenuItem
			// 
			this->â³äêðèòèToolStripMenuItem->Name = L"â³äêðèòèToolStripMenuItem";
			this->â³äêðèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->â³äêðèòèToolStripMenuItem->Text = L"Ä³çíàòèñÿ";
			this->â³äêðèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// çàêðèòèToolStripMenuItem
			// 
			this->çàêðèòèToolStripMenuItem->Name = L"çàêðèòèToolStripMenuItem";
			this->çàêðèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çàêðèòèToolStripMenuItem->Text = L"Çàêðèòè";
			this->çàêðèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàêðèòèToolStripMenuItem_Click);
			// 
			// äàí³ToolStripMenuItem1
			// 
			this->äàí³ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïðîÀâòîðàToolStripMenuItem,
					this->ïðîÏðîãðàìóToolStripMenuItem
			});
			this->äàí³ToolStripMenuItem1->Name = L"äàí³ToolStripMenuItem1";
			this->äàí³ToolStripMenuItem1->Size = System::Drawing::Size(54, 24);
			this->äàí³ToolStripMenuItem1->Text = L"Äàí³";
			// 
			// ïðîÀâòîðàToolStripMenuItem
			// 
			this->ïðîÀâòîðàToolStripMenuItem->Name = L"ïðîÀâòîðàToolStripMenuItem";
			this->ïðîÀâòîðàToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ïðîÀâòîðàToolStripMenuItem->Text = L"Ïðî àâòîðà";
			this->ïðîÀâòîðàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïðîÀâòîðàToolStripMenuItem_Click);
			// 
			// ïðîÏðîãðàìóToolStripMenuItem
			// 
			this->ïðîÏðîãðàìóToolStripMenuItem->Name = L"ïðîÏðîãðàìóToolStripMenuItem";
			this->ïðîÏðîãðàìóToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ïðîÏðîãðàìóToolStripMenuItem->Text = L"Ïðî ïðîãðàìó";
			this->ïðîÏðîãðàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïðîÏðîãðàìóToolStripMenuItem_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(560, 279);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(425, 158);
			this->textBox10->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Bisque;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(673, 463);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 40);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Ä³çíàòèñÿ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// î÷èñèòèToolStripMenuItem
			// 
			this->î÷èñèòèToolStripMenuItem->Name = L"î÷èñèòèToolStripMenuItem";
			this->î÷èñèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->î÷èñèòèToolStripMenuItem->Text = L"Î÷èñèòè";
			this->î÷èñèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñèòèToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1049, 536);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ëàáîðàòîðíà ðîáîòà 2";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ref struct student
		{
			String^ FIO, ^ Curs, ^ Gruppa;
			double a, b, c, d, g;

};

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, c, d, g;
	student^ stud = gcnew student;
	String^ s1, ^ s2;
	stud->FIO = textBox1->Text;
	stud->Curs = textBox2->Text;
	stud->Gruppa = textBox3->Text;
	stud->a = Convert::ToInt32(textBox4->Text);
	stud->b = Convert::ToInt32(textBox5->Text);
	stud->c= Convert::ToInt32(textBox6->Text);
	stud->d = Convert::ToInt32(textBox7->Text);
	stud->g = Convert::ToInt32(textBox8->Text);
	s1 = (stud->FIO   + " "  + stud->Curs + "," + stud->Gruppa + " ," + "  Îö³íêè:" + stud->a.ToString() + " | " + stud->b.ToString() + " | " + stud->c.ToString() + " | " + stud->d.ToString() + " | " + stud->g.ToString() + " | ");

	a = Convert::ToInt32(textBox4->Text);
	b = Convert::ToInt32(textBox5->Text);
	c = Convert::ToInt32(textBox6->Text);
	d = Convert::ToInt32(textBox7->Text);
	g = Convert::ToInt32(textBox8->Text);

	if ((a > 50) && (b >= 50) && (c >= 50) && (d >= 50) && (g >= 50))
	{
		textBox9->AppendText(s1 + "" + s2 + "\r\n");
	}
	else {
		s2 = "";
		textBox10->AppendText(s1 + "" + s2 + "\r\n");
	}
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	



}
private: System::Void çàêðèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void ïðîÀâòîðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Àâòîð ïðîãðàìè Íàñòÿ", "Ïðî àâòîðà", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void ïðîÏðîãðàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ïðîºêò ÎÁÐÎÁÊÀ ÑÒÐÓÊÒÓÐ. Ïîêàçóº, õòî ñòóäåíò³â ñêëàâ çàë³ê, à õòî í³. ßêùî ìåíøå 50 òî íå ñêëàâ(", "Ïðî ïðîãðàìó", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void î÷èñèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox9->Text = "";
	textBox10->Text = "";
	
	
}
};
}
