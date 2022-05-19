#pragma once

namespace Калькулято градусов {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;









	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button16;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox10;







	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое того метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(27, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(103, 29);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(27, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(56, 29);
			this->textBox3->MaxLength = 2;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(27, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(103, 76);
			this->textBox4->MaxLength = 2;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(27, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(56, 76);
			this->textBox5->MaxLength = 2;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(27, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(9, 76);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(27, 20);
			this->textBox6->TabIndex = 9;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(9, 114);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(27, 20);
			this->textBox7->TabIndex = 12;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(56, 114);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(27, 20);
			this->textBox8->TabIndex = 11;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(103, 114);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(27, 20);
			this->textBox9->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(11, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"°";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(11, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"°";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(11, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"°";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(9, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"\'";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(88, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(9, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"\'";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(88, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(9, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"\'";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(136, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"\"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(136, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(12, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"\"";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(136, 29);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(12, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"\"";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(43, 140);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(28, 23);
			this->button12->TabIndex = 32;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(8, 169);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(28, 23);
			this->button13->TabIndex = 33;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(8, 140);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(28, 23);
			this->button14->TabIndex = 34;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 52);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 37;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(42, 169);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(29, 23);
			this->button16->TabIndex = 38;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 4);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 13);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Введите значения";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(77, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 52);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(15, 52);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(15, 20);
			this->textBox10->TabIndex = 39;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(153, 224);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор градусов";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)//Подготовка с очисткой текстбоксов
	{
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//Событие нажатия кнопки посчитать
{
	if (textBox6->Text == "" && textBox5->Text == "" && textBox4->Text == "")//Проверка пустоты текстбоксов второго числа
	{

	}
	else
	{
		if (textBox1->Text == ""){textBox1->Text = "0";}//Проверки на пустоту текстбоксов с заменой на 0
		if (textBox3->Text == ""){textBox3->Text = "0";}
		if (textBox2->Text == ""){textBox2->Text = "0";}
		if (textBox6->Text==""){textBox6->Text = "0";}
		if (textBox5->Text==""){textBox5->Text = "0";}
		if (textBox4->Text==""){textBox4->Text = "0";}
		long int a = System::Convert::ToInt64(textBox1->Text);
		long int b = System::Convert::ToInt64(textBox3->Text);
		long int c = System::Convert::ToInt64(textBox2->Text);
		long int d = System::Convert::ToInt64(textBox6->Text);
		long int f = System::Convert::ToInt64(textBox5->Text);
		long int g = System::Convert::ToInt64(textBox4->Text);
		long int first, second, third;//Объявление переменных для 3-х чисел
		first = a * 3600 + b * 60 + c ;//Переведённое первое число
		second = d * 3600 + f * 60 + g ;//Переведённое второе число
		String^ var = System::Convert::ToString(textBox10->Text);//Конвертирование текста из текстбокса для действий
		if (var == "+")//4 функции для считывания действий в текстбоксе
		{
			third = first + second;
			textBox7->Text = System::Convert::ToString(third/3600);
			textBox8->Text = System::Convert::ToString((third % 3600)/60);
			textBox9->Text = System::Convert::ToString(third % 60);
		}
		else if (var == "-")
		{
			third = first - second;
			textBox7->Text = System::Convert::ToString(third / 3600);
			textBox8->Text = System::Convert::ToString((third % 3600) / 60);
			textBox9->Text = System::Convert::ToString(third % 60);
		}
		else if (var == "/")
		{
			if(second == 0){}//Проверка второго числа, чтобы оно было не = 0
			else 
			{
				double first1 = System::Convert::ToDouble(first);
				double second1 = System::Convert::ToDouble(second);
				double third1 = System::Convert::ToDouble(third);
				third1 = first1 / (second1/3600);
				third = System::Convert::ToInt64(third1);
				textBox7->Text = System::Convert::ToString(third / 3600);
				textBox8->Text = System::Convert::ToString((third % 3600) / 60);
				textBox9->Text = System::Convert::ToString(third % 60);
			}
		}
		else if (var == "*")
		{
			double first1 = System::Convert::ToDouble(first);
			double second1 = System::Convert::ToDouble(second);
			double third1 = System::Convert::ToDouble(third);
			third1 = first1 * (second1/3600);
			third = System::Convert::ToInt64(third1);
			textBox7->Text = System::Convert::ToString(third / 3600);
			textBox8->Text = System::Convert::ToString((third % 3600) / 60);
			textBox9->Text = System::Convert::ToString(third % 60);
		}
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)//Кнопки для заполнения текстбокса для действий
{
	String^ plus = "+";
	textBox10->Text = System::Convert::ToString(plus);
	textBox10->ReadOnly = true;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ minus = "-";
	textBox10->Text = System::Convert::ToString(minus);
	textBox10->ReadOnly = true;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ divide = "/";
	textBox10->Text = System::Convert::ToString(divide);
	textBox10->ReadOnly = true;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ mult = "*";
	textBox10->Text = System::Convert::ToString(mult);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)//Кнопка очистки
{
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
}
};
}
