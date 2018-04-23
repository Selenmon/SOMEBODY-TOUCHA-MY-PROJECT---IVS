#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<string>
#include<math.h>
namespace Project1 {

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
        System::String^input = "";
        System::String^operand1 = "";
        System::String^operand2 = "";
        char operation = NULL;
        double result = NULL;
        double ans = NULL;

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
    private: System::Windows::Forms::Button^  button_divide;
    protected:

    private: System::Windows::Forms::TextBox^  textBox1;
    private: System::Windows::Forms::Button^  button_9;

    private: System::Windows::Forms::Button^  button_7;
    private: System::Windows::Forms::Button^  button_8;
    private: System::Windows::Forms::Button^  button_4;
    private: System::Windows::Forms::Button^  button_5;




    private: System::Windows::Forms::Button^  button_6;
    private: System::Windows::Forms::Button^  button_multiple;



    private: System::Windows::Forms::Button^  button_1;
    private: System::Windows::Forms::Button^  button_2;
    private: System::Windows::Forms::Button^  button_sub;



    private: System::Windows::Forms::Button^  button_3;
    private: System::Windows::Forms::Button^  button_COMA;
    private: System::Windows::Forms::Button^  button_0;
    private: System::Windows::Forms::Button^  buttonEquals;
    private: System::Windows::Forms::Button^  button_add;





    private: System::Windows::Forms::Button^  buttonWeirddel;
    private: System::Windows::Forms::Button^  buttonCEdel;
    private: System::Windows::Forms::Button^  buttonCdel;
    private: System::Windows::Forms::Button^  buttonPlusminus;





    private: System::Windows::Forms::Button^  buttonfactorial;
    private: System::Windows::Forms::Button^  buttonPower;
    private: System::Windows::Forms::Button^  buttonSquareroot;
    private: System::Windows::Forms::Button^  buttonLogarithm;



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
            this->button_divide = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button_9 = (gcnew System::Windows::Forms::Button());
            this->button_7 = (gcnew System::Windows::Forms::Button());
            this->button_8 = (gcnew System::Windows::Forms::Button());
            this->button_4 = (gcnew System::Windows::Forms::Button());
            this->button_5 = (gcnew System::Windows::Forms::Button());
            this->button_6 = (gcnew System::Windows::Forms::Button());
            this->button_multiple = (gcnew System::Windows::Forms::Button());
            this->button_1 = (gcnew System::Windows::Forms::Button());
            this->button_2 = (gcnew System::Windows::Forms::Button());
            this->button_sub = (gcnew System::Windows::Forms::Button());
            this->button_3 = (gcnew System::Windows::Forms::Button());
            this->button_COMA = (gcnew System::Windows::Forms::Button());
            this->button_0 = (gcnew System::Windows::Forms::Button());
            this->buttonEquals = (gcnew System::Windows::Forms::Button());
            this->button_add = (gcnew System::Windows::Forms::Button());
            this->buttonWeirddel = (gcnew System::Windows::Forms::Button());
            this->buttonCEdel = (gcnew System::Windows::Forms::Button());
            this->buttonCdel = (gcnew System::Windows::Forms::Button());
            this->buttonPlusminus = (gcnew System::Windows::Forms::Button());
            this->buttonfactorial = (gcnew System::Windows::Forms::Button());
            this->buttonPower = (gcnew System::Windows::Forms::Button());
            this->buttonSquareroot = (gcnew System::Windows::Forms::Button());
            this->buttonLogarithm = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button_divide
            // 
            this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_divide->Location = System::Drawing::Point(271, 220);
            this->button_divide->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_divide->Name = L"button_divide";
            this->button_divide->Size = System::Drawing::Size(67, 39);
            this->button_divide->TabIndex = 0;
            this->button_divide->Text = L"/";
            this->button_divide->UseVisualStyleBackColor = true;
            this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox1->Location = System::Drawing::Point(19, 83);
            this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(320, 33);
            this->textBox1->TabIndex = 1;
            // 
            // button_9
            // 
            this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_9->Location = System::Drawing::Point(187, 220);
            this->button_9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_9->Name = L"button_9";
            this->button_9->Size = System::Drawing::Size(67, 39);
            this->button_9->TabIndex = 2;
            this->button_9->Text = L"9";
            this->button_9->UseVisualStyleBackColor = true;
            this->button_9->Click += gcnew System::EventHandler(this, &MyForm::button_9_Click);
            // 
            // button_7
            // 
            this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_7->Location = System::Drawing::Point(19, 220);
            this->button_7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_7->Name = L"button_7";
            this->button_7->Size = System::Drawing::Size(67, 39);
            this->button_7->TabIndex = 3;
            this->button_7->Text = L"7";
            this->button_7->UseVisualStyleBackColor = true;
            this->button_7->Click += gcnew System::EventHandler(this, &MyForm::button_7_Click);
            // 
            // button_8
            // 
            this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_8->Location = System::Drawing::Point(103, 220);
            this->button_8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_8->Name = L"button_8";
            this->button_8->Size = System::Drawing::Size(67, 39);
            this->button_8->TabIndex = 4;
            this->button_8->Text = L"8";
            this->button_8->UseVisualStyleBackColor = true;
            this->button_8->Click += gcnew System::EventHandler(this, &MyForm::button_8_Click);
            // 
            // button_4
            // 
            this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_4->Location = System::Drawing::Point(19, 263);
            this->button_4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_4->Name = L"button_4";
            this->button_4->Size = System::Drawing::Size(67, 39);
            this->button_4->TabIndex = 5;
            this->button_4->Text = L"4";
            this->button_4->UseVisualStyleBackColor = true;
            this->button_4->Click += gcnew System::EventHandler(this, &MyForm::button_4_Click);
            // 
            // button_5
            // 
            this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_5->Location = System::Drawing::Point(103, 263);
            this->button_5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_5->Name = L"button_5";
            this->button_5->Size = System::Drawing::Size(67, 39);
            this->button_5->TabIndex = 6;
            this->button_5->Text = L"5";
            this->button_5->UseVisualStyleBackColor = true;
            this->button_5->Click += gcnew System::EventHandler(this, &MyForm::button_5_Click);
            // 
            // button_6
            // 
            this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_6->Location = System::Drawing::Point(187, 263);
            this->button_6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_6->Name = L"button_6";
            this->button_6->Size = System::Drawing::Size(67, 39);
            this->button_6->TabIndex = 7;
            this->button_6->Text = L"6";
            this->button_6->UseVisualStyleBackColor = true;
            this->button_6->Click += gcnew System::EventHandler(this, &MyForm::button_6_Click);
            // 
            // button_multiple
            // 
            this->button_multiple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_multiple->Location = System::Drawing::Point(271, 263);
            this->button_multiple->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_multiple->Name = L"button_multiple";
            this->button_multiple->Size = System::Drawing::Size(67, 39);
            this->button_multiple->TabIndex = 8;
            this->button_multiple->Text = L"x";
            this->button_multiple->UseVisualStyleBackColor = true;
            this->button_multiple->Click += gcnew System::EventHandler(this, &MyForm::button_multiple_Click);
            // 
            // button_1
            // 
            this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_1->Location = System::Drawing::Point(19, 306);
            this->button_1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_1->Name = L"button_1";
            this->button_1->Size = System::Drawing::Size(67, 39);
            this->button_1->TabIndex = 9;
            this->button_1->Text = L"1";
            this->button_1->UseVisualStyleBackColor = true;
            this->button_1->Click += gcnew System::EventHandler(this, &MyForm::button_1_Click);
            // 
            // button_2
            // 
            this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_2->Location = System::Drawing::Point(103, 306);
            this->button_2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_2->Name = L"button_2";
            this->button_2->Size = System::Drawing::Size(67, 39);
            this->button_2->TabIndex = 10;
            this->button_2->Text = L"2";
            this->button_2->UseVisualStyleBackColor = true;
            this->button_2->Click += gcnew System::EventHandler(this, &MyForm::button_2_Click);
            // 
            // button_sub
            // 
            this->button_sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_sub->Location = System::Drawing::Point(271, 306);
            this->button_sub->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_sub->Name = L"button_sub";
            this->button_sub->Size = System::Drawing::Size(67, 39);
            this->button_sub->TabIndex = 11;
            this->button_sub->Text = L"-";
            this->button_sub->UseVisualStyleBackColor = true;
            this->button_sub->Click += gcnew System::EventHandler(this, &MyForm::button_sub_Click);
            // 
            // button_3
            // 
            this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_3->Location = System::Drawing::Point(187, 306);
            this->button_3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_3->Name = L"button_3";
            this->button_3->Size = System::Drawing::Size(67, 39);
            this->button_3->TabIndex = 12;
            this->button_3->Text = L"3";
            this->button_3->UseVisualStyleBackColor = true;
            this->button_3->Click += gcnew System::EventHandler(this, &MyForm::button_3_Click);
            // 
            // button_COMA
            // 
            this->button_COMA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_COMA->Location = System::Drawing::Point(19, 349);
            this->button_COMA->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_COMA->Name = L"button_COMA";
            this->button_COMA->Size = System::Drawing::Size(67, 39);
            this->button_COMA->TabIndex = 13;
            this->button_COMA->Text = L",";
            this->button_COMA->UseVisualStyleBackColor = true;
            this->button_COMA->Click += gcnew System::EventHandler(this, &MyForm::button_COMA_Click);
            // 
            // button_0
            // 
            this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_0->Location = System::Drawing::Point(103, 349);
            this->button_0->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_0->Name = L"button_0";
            this->button_0->Size = System::Drawing::Size(67, 39);
            this->button_0->TabIndex = 14;
            this->button_0->Text = L"0";
            this->button_0->UseVisualStyleBackColor = true;
            this->button_0->Click += gcnew System::EventHandler(this, &MyForm::button_0_Click);
            // 
            // buttonEquals
            // 
            this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonEquals->Location = System::Drawing::Point(187, 349);
            this->buttonEquals->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonEquals->Name = L"buttonEquals";
            this->buttonEquals->Size = System::Drawing::Size(67, 39);
            this->buttonEquals->TabIndex = 15;
            this->buttonEquals->Text = L"=";
            this->buttonEquals->UseVisualStyleBackColor = true;
            this->buttonEquals->Click += gcnew System::EventHandler(this, &MyForm::buttonEquals_Click);
            // 
            // button_add
            // 
            this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button_add->Location = System::Drawing::Point(271, 349);
            this->button_add->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_add->Name = L"button_add";
            this->button_add->Size = System::Drawing::Size(67, 39);
            this->button_add->TabIndex = 16;
            this->button_add->Text = L"+";
            this->button_add->UseVisualStyleBackColor = true;
            this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
            // 
            // buttonWeirddel
            // 
            this->buttonWeirddel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonWeirddel->Location = System::Drawing::Point(19, 177);
            this->buttonWeirddel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonWeirddel->Name = L"buttonWeirddel";
            this->buttonWeirddel->Size = System::Drawing::Size(67, 39);
            this->buttonWeirddel->TabIndex = 17;
            this->buttonWeirddel->Text = L"<-";
            this->buttonWeirddel->UseVisualStyleBackColor = true;
            this->buttonWeirddel->Click += gcnew System::EventHandler(this, &MyForm::buttonWeirddel_Click);
            // 
            // buttonCEdel
            // 
            this->buttonCEdel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonCEdel->Location = System::Drawing::Point(103, 177);
            this->buttonCEdel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonCEdel->Name = L"buttonCEdel";
            this->buttonCEdel->Size = System::Drawing::Size(67, 39);
            this->buttonCEdel->TabIndex = 18;
            this->buttonCEdel->Text = L"Ans";
            this->buttonCEdel->UseVisualStyleBackColor = true;
            this->buttonCEdel->Click += gcnew System::EventHandler(this, &MyForm::buttonAns_Click);
            // 
            // buttonCdel
            // 
            this->buttonCdel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonCdel->Location = System::Drawing::Point(187, 177);
            this->buttonCdel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonCdel->Name = L"buttonCdel";
            this->buttonCdel->Size = System::Drawing::Size(67, 39);
            this->buttonCdel->TabIndex = 19;
            this->buttonCdel->Text = L"C";
            this->buttonCdel->UseVisualStyleBackColor = true;
            this->buttonCdel->Click += gcnew System::EventHandler(this, &MyForm::buttonCdel_Click);
            // 
            // buttonPlusminus
            // 
            this->buttonPlusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonPlusminus->Location = System::Drawing::Point(271, 177);
            this->buttonPlusminus->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonPlusminus->Name = L"buttonPlusminus";
            this->buttonPlusminus->Size = System::Drawing::Size(67, 39);
            this->buttonPlusminus->TabIndex = 20;
            this->buttonPlusminus->Text = L"+-";
            this->buttonPlusminus->UseVisualStyleBackColor = true;
            this->buttonPlusminus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlusminus_Click);
            // 
            // buttonfactorial
            // 
            this->buttonfactorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonfactorial->Location = System::Drawing::Point(19, 135);
            this->buttonfactorial->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonfactorial->Name = L"buttonfactorial";
            this->buttonfactorial->Size = System::Drawing::Size(67, 39);
            this->buttonfactorial->TabIndex = 21;
            this->buttonfactorial->Text = L"x !";
            this->buttonfactorial->UseVisualStyleBackColor = true;
            this->buttonfactorial->Click += gcnew System::EventHandler(this, &MyForm::buttonfactorial_Click);
            // 
            // buttonPower
            // 
            this->buttonPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonPower->Location = System::Drawing::Point(103, 135);
            this->buttonPower->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonPower->Name = L"buttonPower";
            this->buttonPower->Size = System::Drawing::Size(67, 39);
            this->buttonPower->TabIndex = 22;
            this->buttonPower->Text = L"x^y";
            this->buttonPower->UseVisualStyleBackColor = true;
            this->buttonPower->Click += gcnew System::EventHandler(this, &MyForm::buttonPower_Click);
            // 
            // buttonSquareroot
            // 
            this->buttonSquareroot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonSquareroot->Location = System::Drawing::Point(187, 135);
            this->buttonSquareroot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonSquareroot->Name = L"buttonSquareroot";
            this->buttonSquareroot->Size = System::Drawing::Size(67, 39);
            this->buttonSquareroot->TabIndex = 23;
            this->buttonSquareroot->Text = L"n√(x)";
            this->buttonSquareroot->UseVisualStyleBackColor = true;
            this->buttonSquareroot->Click += gcnew System::EventHandler(this, &MyForm::buttonSquareroot_Click);
            // 
            // buttonLogarithm
            // 
            this->buttonLogarithm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonLogarithm->Location = System::Drawing::Point(271, 135);
            this->buttonLogarithm->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->buttonLogarithm->Name = L"buttonLogarithm";
            this->buttonLogarithm->Size = System::Drawing::Size(67, 39);
            this->buttonLogarithm->TabIndex = 24;
            this->buttonLogarithm->Text = L"log n (x)";
            this->buttonLogarithm->UseVisualStyleBackColor = true;
            this->buttonLogarithm->Click += gcnew System::EventHandler(this, &MyForm::buttonLogarithm_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(385, 419);
            this->Controls->Add(this->buttonLogarithm);
            this->Controls->Add(this->buttonSquareroot);
            this->Controls->Add(this->buttonPower);
            this->Controls->Add(this->buttonfactorial);
            this->Controls->Add(this->buttonPlusminus);
            this->Controls->Add(this->buttonCdel);
            this->Controls->Add(this->buttonCEdel);
            this->Controls->Add(this->buttonWeirddel);
            this->Controls->Add(this->button_add);
            this->Controls->Add(this->buttonEquals);
            this->Controls->Add(this->button_0);
            this->Controls->Add(this->button_COMA);
            this->Controls->Add(this->button_3);
            this->Controls->Add(this->button_sub);
            this->Controls->Add(this->button_2);
            this->Controls->Add(this->button_1);
            this->Controls->Add(this->button_multiple);
            this->Controls->Add(this->button_6);
            this->Controls->Add(this->button_5);
            this->Controls->Add(this->button_4);
            this->Controls->Add(this->button_8);
            this->Controls->Add(this->button_7);
            this->Controls->Add(this->button_9);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button_divide);
            this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->Name = L"MyForm";
            this->Text = L"IVS-Calculator";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion 
    private: System::Void buttonfactorial_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        operation = '!';
        this->textBox1->Text = "!";
    }
    private: System::Void buttonPower_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        operation = '^';
        this->textBox1->Text = "";
        this->textBox1->Text = "^";
    }
    private: System::Void button_divide_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        operation = '/';
        this->textBox1->Text = "";
        this->textBox1->Text = "/";
    }
    private: System::Void buttonSquareroot_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        operation = '√';
        this->textBox1->Text = "";
        this->textBox1->Text = "√";
    }
    private: System::Void buttonLogarithm_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        operation = 'l';
        this->textBox1->Text = "";
        this->textBox1->Text = "l";
    }
    private: System::Void buttonWeirddel_Click(System::Object^  sender, System::EventArgs^  e)
    {
        this->textBox1->Text = "";
        this->input = "";
        this->operand1 = "";
        this->operand2 = "";
    }
    private: System::Void buttonAns_Click(System::Object^  sender, System::EventArgs^  e)
    {
        this->textBox1->Text = "";
        this->textBox1->Text += ans;
    }
    private: System::Void buttonCdel_Click(System::Object^  sender, System::EventArgs^  e)
    {
        this->textBox1->Text = "";
        this->input = "";
        this->operand1 = "";
        this->operand2 = "";
    }
    private: System::Void buttonPlusminus_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        double num1 = System::Convert::ToDouble(operand1);
        num1 = num1 * -1;
        operand1 = num1.ToString();
        this->textBox1->Text = operand1;
        operand1 = "";
    }
    private: System::Void button_7_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "7";
    }
    private: System::Void button_8_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "8";
    }
    private: System::Void button_9_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "9";
    }
    private: System::Void button_4_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "4";
    }
    private: System::Void button_5_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "5";
    }
    private: System::Void button_6_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "6";
    }
    private: System::Void button_multiple_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        operation = '*';
        this->textBox1->Text = "";
        this->textBox1->Text += "*";
    }
    private: System::Void button_1_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "1";
    }
    private: System::Void button_2_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "2";
    }
    private: System::Void button_3_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "3";
    }
    private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        operation = '+';
        this->textBox1->Text = "";
        this->textBox1->Text += "+";
    }
    private: System::Void button_sub_Click(System::Object^  sender, System::EventArgs^  e)
    {
        operand1 = this->textBox1->Text;
        operation = '-';
        this->textBox1->Text = "";
        this->textBox1->Text = "-";
    }
    private: System::Void button_COMA_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || '.')) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += ".";
    }
    private: System::Void button_0_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if (result != NULL)
        {
            this->textBox1->Text = "";
            result = NULL;
        }

        bool pls = false;

        for (int i = 0; i < (this->textBox1->Text->Length); i++) {
            if (!(isdigit(this->textBox1->Text[i]) || (this->textBox1->Text[i] == '.'))) pls = true;
        }
        if (pls) {
            this->textBox1->Text = "";
        }
        this->textBox1->Text += "0";
    }
    private: System::Void buttonEquals_Click(System::Object^  sender, System::EventArgs^  e)
    {
        System::String^operand2 = this->textBox1->Text;
        double num1 = System::Convert::ToDouble(operand1);
        double num2 = 0.0;
        if (operation != '!' && operation != 'l')
        {
            double num2 = System::Convert::ToDouble(operand2);
            if (operation == '+')
            {
                result = num1 + num2;
                ans = result;
                this->textBox1->Text = result.ToString();
            }
            else if (operation == '-')
            {
                result = num1 - num2;
                ans = result;
                this->textBox1->Text = result.ToString();
            }
            else if (operation == '*')
            {
                result = num1 * num2;
                ans = result;
                this->textBox1->Text = result.ToString();
            }
            else if (operation == '/')
            {
                if (num2 != 0)
                {
                    result = num1 / num2;
                    ans = result;
                    this->textBox1->Text = result.ToString();
                }
                else
                {
                    this->textBox1->Text = "DIV/Zero!";
                }
            }
            else if (operation == '^')
            {
                if (num2 == 0)
                {
                    result = 1;
                    this->textBox1->Text = result.ToString();
                }
                else if (num2 == 0 && num1 == 1)
                {
                    this->textBox1->Text = "Math Error!";
                }
                else if (num2 < 0)
                {
                    this->textBox1->Text = "Exponent not a natural number!";
                }
                else
                {
                    result = 1;
                    for (int i = 0; i = num2; i++)
                    {
                        result = result * num1;
                    }
                    ans = result;
                    this->textBox1->Text = result.ToString();
                }
            }
            else if (operation == '√')
            {
                if (num1 < 0)
                {
                    this->textBox1->Text = "Can't root a negative number!";
                }
                else
                {
                    result = pow(num2, 1 / num1);
                    ans = result;
                    this->textBox1->Text = result.ToString();
                }
            };
        }
        else if (operation == '!')
        {
            if (num1 < 0)
            {
                this->textBox1->Text = "Not a valid number!";
            }
            else
            {
                result = 1;
                for (int i = num1; i > 0; i--)
                {
                    result = result * i;
                }
                ans = result;
                this->textBox1->Text = result.ToString();
            }
        }
        else if (operation == 'l')
        {
            result = log10(num1);
            this->textBox1->Text = result.ToString();
        }
    }
    };
}
