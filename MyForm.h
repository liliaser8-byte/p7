#pragma once
#include <string>
#using <Microsoft.VisualBasic.dll>

namespace p7 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox2;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(884, 504);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->checkedListBox1);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(876, 475);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(529, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 53);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Очистити чергу";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(462, 191);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(275, 122);
			this->panel2->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(4, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 57);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Додати нові значення";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Верхній елемент черги", L"Кількість елементів в черзі",
					L"Видалити перший елемент черги"
			});
			this->checkedListBox1->Location = System::Drawing::Point(462, 32);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(275, 89);
			this->checkedListBox1->TabIndex = 1;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Thistle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(6, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(394, 466);
			this->panel1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(68, 29);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 281);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вивести чергу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->panel3);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(876, 475);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(285, 352);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 45);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Обчислити";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Location = System::Drawing::Point(438, 99);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(204, 194);
			this->panel3->TabIndex = 3;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(27, 106);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 72);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Видалити елементи черги";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(27, 13);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 74);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Додати значення черги";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(236, 30);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введіть розмір черги";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(88, 81);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(181, 228);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->panel4);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(876, 475);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(323, 361);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(156, 50);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Обчислити";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Location = System::Drawing::Point(473, 118);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(204, 194);
			this->panel4->TabIndex = 8;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(26, 103);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(157, 61);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Видалити елементи черги";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(26, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(157, 55);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Додати елементи черги";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(271, 49);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введіть розмір черги";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(153, 105);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(181, 228);
			this->listBox2->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 504);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Collections::Generic::Queue<int> numbersQueue;
		System::Collections::Generic::Queue<int> myQueue1;
		System::Collections::Generic::Queue<String^>StrQueue;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		numbersQueue.Enqueue(10);
		numbersQueue.Enqueue(20);
		numbersQueue.Enqueue(30);

		textBox1->Clear();
		for each (int number in numbersQueue) {
			textBox1->AppendText(number.ToString() + "\r\n");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	number = Convert::ToInt32(textBox2->Text);

	numbersQueue.Enqueue(number);

	textBox1->Clear();

	for each (int num in numbersQueue) {
		textBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedListBox1->GetItemChecked(0)) { // "Верхній елемент черги"
		if (numbersQueue.Count > 0) {
			MessageBox::Show("Поточний верхній елемент: " + numbersQueue.Peek().ToString());
		}
		else {
			MessageBox::Show("Черга порожня.");
		}
	}
	else if (checkedListBox1->GetItemChecked(1)) { // "Кількість елементів в черзі"
		int count = numbersQueue.Count;
		MessageBox::Show("Кількість елементів у черзі: " + count.ToString());
	}
	else if (checkedListBox1->GetItemChecked(2)) { // "Dequeue"
		if (numbersQueue.Count > 0) {
			int removedElement = numbersQueue.Dequeue();
			MessageBox::Show("Видалено верхній елемент: " + removedElement.ToString());
		}
		else {
			MessageBox::Show("Не можна видалити, черга порожня.");
		}
	}

	textBox1->Clear();

	for each (int num in numbersQueue) {
		textBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox3->Text);

	for (int i = 0; i < size; ++i) {
		int inputValue = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("Елемент черги", "Введіть значення елементів черги", "", 200, 200));

		myQueue1.Enqueue(inputValue);
		listBox1->Items->Add(inputValue.ToString());
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myQueue1.Count > 0) {
		myQueue1.Dequeue();
		if (listBox1->Items->Count > 0) {
			listBox1->Items->RemoveAt(0);
		}
	}
	else {
		listBox1->Items->Add("Черга порожня");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0;
	int evenCount = 0;

	for each (int value in myQueue1) {
		// Перевірка: чи число парне (value % 2 == 0) та чи належить діапазону від 10 до 20
		if (value % 2 == 0 && value >= 10 && value <= 20) {
			sum += value;
			evenCount++;
		}
	}

	if (evenCount > 0) {
		double average = (double)sum / evenCount;
		MessageBox::Show("Середнє значення парних чисел у діапазоні від 10 до 20: " + average.ToString(), "Результат");
	}
	else {
		MessageBox::Show("Немає парних чисел у діапазоні від 10 до 20.", "Результат");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox4->Text);
	for (int i = 0; i < size; ++i) {
		String^ inputValue = Microsoft::VisualBasic::Interaction::InputBox("Введіть значення елементів черги", "Введіть значення елемента черги", "", 200, 200);
		StrQueue.Enqueue(inputValue);
		listBox2->Items->Add(inputValue);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StrQueue.Count > 0) {
		StrQueue.Dequeue();
		if (listBox2->Items->Count > 0) {
			listBox2->Items->RemoveAt(0);
		}
	}
	else {
		listBox2->Items->Add("Черга порожня");
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int CountChars = 0;

	for (int i = 0; i < listBox2->Items->Count; i++) {
		String^ value = listBox2->Items[i]->ToString();
		CountChars += value->Length;
	}

	MessageBox::Show("Загальна кількість символів: " + CountChars, "Підсумок символів");
}
};
}
