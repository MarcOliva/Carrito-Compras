#pragma once
#include "CPersonaje.h"
#include "HistorialPartidas.h"
namespace Veintiuno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		CPersonaje *obj;
		int cantidad_acumulada = 0;
		int i = 0;
	private: System::Windows::Forms::Button^  btnPartidas;
	public:

	public:
		int aux = 0;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			obj = new CPersonaje;
		}
	private: System::Windows::Forms::Timer^  Verificacion_cantidad_dinero;
	public:
	private: System::Windows::Forms::Timer^  Maquina;
			 int cantidad_maquina = 0;
		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  txtDineroActual;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  txtTotalPc;
	private: System::Windows::Forms::Label^  txt;
	private: System::Windows::Forms::Button^  btnSalir;
	private: System::Windows::Forms::Label^  txtApostado;
	private: System::Windows::Forms::ListBox^  lsbMaquina;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  txtTotal;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  btnNO;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ListBox^  lsbPersonaje;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtApuesta;
	private: System::Windows::Forms::Button^  btnSI;
	private: System::Windows::Forms::Button^  btnApuesta;
	private: System::Windows::Forms::Label^  label11;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtDineroActual = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnPartidas = (gcnew System::Windows::Forms::Button());
			this->txtTotalPc = (gcnew System::Windows::Forms::Label());
			this->txt = (gcnew System::Windows::Forms::Label());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->txtApostado = (gcnew System::Windows::Forms::Label());
			this->lsbMaquina = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtTotal = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnNO = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lsbPersonaje = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtApuesta = (gcnew System::Windows::Forms::TextBox());
			this->btnSI = (gcnew System::Windows::Forms::Button());
			this->btnApuesta = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Verificacion_cantidad_dinero = (gcnew System::Windows::Forms::Timer(this->components));
			this->Maquina = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, -68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"$$ :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(255, -73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Maquina";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(-66, -75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 29);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Jugador";
			// 
			// txtDineroActual
			// 
			this->txtDineroActual->AutoSize = true;
			this->txtDineroActual->BackColor = System::Drawing::Color::Transparent;
			this->txtDineroActual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDineroActual->Location = System::Drawing::Point(237, 17);
			this->txtDineroActual->Name = L"txtDineroActual";
			this->txtDineroActual->Size = System::Drawing::Size(39, 20);
			this->txtDineroActual->TabIndex = 19;
			this->txtDineroActual->Text = L"200";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(200, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"$$ :";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->btnPartidas);
			this->panel2->Controls->Add(this->txtTotalPc);
			this->panel2->Controls->Add(this->txt);
			this->panel2->Controls->Add(this->btnSalir);
			this->panel2->Controls->Add(this->txtApostado);
			this->panel2->Controls->Add(this->lsbMaquina);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(316, 40);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(298, 381);
			this->panel2->TabIndex = 18;
			// 
			// btnPartidas
			// 
			this->btnPartidas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPartidas->Location = System::Drawing::Point(7, 326);
			this->btnPartidas->Name = L"btnPartidas";
			this->btnPartidas->Size = System::Drawing::Size(185, 42);
			this->btnPartidas->TabIndex = 11;
			this->btnPartidas->Text = L"Historial de Partidas";
			this->btnPartidas->UseVisualStyleBackColor = true;
			this->btnPartidas->Click += gcnew System::EventHandler(this, &MyForm::btnPartidas_Click);
			// 
			// txtTotalPc
			// 
			this->txtTotalPc->AutoSize = true;
			this->txtTotalPc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotalPc->Location = System::Drawing::Point(124, 261);
			this->txtTotalPc->Name = L"txtTotalPc";
			this->txtTotalPc->Size = System::Drawing::Size(29, 20);
			this->txtTotalPc->TabIndex = 10;
			this->txtTotalPc->Text = L"00";
			// 
			// txt
			// 
			this->txt->AutoSize = true;
			this->txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt->Location = System::Drawing::Point(3, 261);
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(115, 20);
			this->txt->TabIndex = 9;
			this->txt->Text = L"Total Actual :";
			// 
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->ForeColor = System::Drawing::Color::Red;
			this->btnSalir->Location = System::Drawing::Point(212, 327);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(71, 42);
			this->btnSalir->TabIndex = 6;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// txtApostado
			// 
			this->txtApostado->AutoSize = true;
			this->txtApostado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApostado->Location = System::Drawing::Point(163, 10);
			this->txtApostado->Name = L"txtApostado";
			this->txtApostado->Size = System::Drawing::Size(29, 20);
			this->txtApostado->TabIndex = 5;
			this->txtApostado->Text = L"00";
			// 
			// lsbMaquina
			// 
			this->lsbMaquina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lsbMaquina->FormattingEnabled = true;
			this->lsbMaquina->ItemHeight = 20;
			this->lsbMaquina->Location = System::Drawing::Point(7, 54);
			this->lsbMaquina->Name = L"lsbMaquina";
			this->lsbMaquina->Size = System::Drawing::Size(276, 204);
			this->lsbMaquina->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Dinero Apostado :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(426, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 29);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Maquina";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->txtTotal);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->btnNO);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->lsbPersonaje);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->txtApuesta);
			this->panel1->Controls->Add(this->btnSI);
			this->panel1->Controls->Add(this->btnApuesta);
			this->panel1->Location = System::Drawing::Point(12, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(298, 381);
			this->panel1->TabIndex = 14;
			// 
			// txtTotal
			// 
			this->txtTotal->AutoSize = true;
			this->txtTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotal->Location = System::Drawing::Point(124, 261);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(29, 20);
			this->txtTotal->TabIndex = 8;
			this->txtTotal->Text = L"00";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Total Actual :";
			// 
			// btnNO
			// 
			this->btnNO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNO->Location = System::Drawing::Point(164, 327);
			this->btnNO->Name = L"btnNO";
			this->btnNO->Size = System::Drawing::Size(100, 42);
			this->btnNO->TabIndex = 6;
			this->btnNO->Text = L"NO";
			this->btnNO->UseVisualStyleBackColor = true;
			this->btnNO->Click += gcnew System::EventHandler(this, &MyForm::btnNO_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(2, 304);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(177, 20);
			this->label9->TabIndex = 5;
			this->label9->Text = L"¿Desea una carta \? :";
			// 
			// lsbPersonaje
			// 
			this->lsbPersonaje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lsbPersonaje->FormattingEnabled = true;
			this->lsbPersonaje->ItemHeight = 20;
			this->lsbPersonaje->Location = System::Drawing::Point(7, 54);
			this->lsbPersonaje->Name = L"lsbPersonaje";
			this->lsbPersonaje->Size = System::Drawing::Size(276, 204);
			this->lsbPersonaje->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 10);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(155, 20);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Dinero a Apostar :";
			// 
			// txtApuesta
			// 
			this->txtApuesta->BackColor = System::Drawing::SystemColors::Window;
			this->txtApuesta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApuesta->Location = System::Drawing::Point(164, 10);
			this->txtApuesta->Name = L"txtApuesta";
			this->txtApuesta->Size = System::Drawing::Size(70, 26);
			this->txtApuesta->TabIndex = 1;
			this->txtApuesta->Text = L"00";
			// 
			// btnSI
			// 
			this->btnSI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSI->Location = System::Drawing::Point(38, 327);
			this->btnSI->Name = L"btnSI";
			this->btnSI->Size = System::Drawing::Size(108, 42);
			this->btnSI->TabIndex = 2;
			this->btnSI->Text = L"SI";
			this->btnSI->UseVisualStyleBackColor = true;
			this->btnSI->Click += gcnew System::EventHandler(this, &MyForm::btnSI_Click);
			// 
			// btnApuesta
			// 
			this->btnApuesta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnApuesta->Location = System::Drawing::Point(240, 10);
			this->btnApuesta->Name = L"btnApuesta";
			this->btnApuesta->Size = System::Drawing::Size(43, 27);
			this->btnApuesta->TabIndex = 3;
			this->btnApuesta->Text = L"ok";
			this->btnApuesta->UseVisualStyleBackColor = true;
			this->btnApuesta->Click += gcnew System::EventHandler(this, &MyForm::btnApuesta_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Blue;
			this->label11->Location = System::Drawing::Point(105, 10);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 29);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Jugador";
			// 
			// Verificacion_cantidad_dinero
			// 
			this->Verificacion_cantidad_dinero->Enabled = true;
			this->Verificacion_cantidad_dinero->Tick += gcnew System::EventHandler(this, &MyForm::Verificacion_cantidad_dinero_Tick);
			// 
			// Maquina
			// 
			this->Maquina->Interval = 1000;
			this->Maquina->Tick += gcnew System::EventHandler(this, &MyForm::Maquina_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 430);
			this->Controls->Add(this->txtDineroActual);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Veintiuno";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnApuesta_Click(System::Object^  sender, System::EventArgs^  e) {
		int apuesta = Convert::ToInt32(txtApuesta->Text);
		int dineroActual = Convert::ToInt32(txtDineroActual->Text);
		if (dineroActual != 0 && apuesta <= dineroActual) {
			if (apuesta > 20) {
				txtApostado->Text = Convert::ToString(apuesta);
			}
			else {
				MessageBox::Show("El valor tiene que ser mayor a 20");
				txtApuesta->Text = "00";
			}
		}
		else {
			MessageBox::Show("No tienes la cantidad suficiente de dinero para Apostar");
			txtApuesta->Text = "00";
		}
	}
private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	btnNO->Enabled = false;
}
		 void Reinicio() {
			 cantidad_acumulada = 0;
			 cantidad_maquina = 0;
			 lsbMaquina->Items->Clear();
			 lsbPersonaje->Items->Clear();
			 obj->Limpiar();
			 txtApuesta->Text = "00";
			 txtApostado->Text = "00";
			 txtTotal->Text = "0";
			 txtTotalPc->Text = "0";
			 btnSI->Enabled = true;
			 btnNO->Enabled = false;

		 }
private: System::Void btnNO_Click(System::Object^  sender, System::EventArgs^  e) {
	btnSI->Enabled = false;
	btnNO->Enabled = false;
	obj->Limpiar();
	Maquina->Enabled = true;

}
private: System::Void Maquina_Tick(System::Object^  sender, System::EventArgs^  e) {
	CLista<Personaje*> Aux = obj->GetAtrPersonaje();
	if (cantidad_maquina <= 21 && i < Aux.longitud() + 1) {
		int carta_pc = Random::Random().Next(1, 14);
		cantidad_maquina = cantidad_maquina + carta_pc;
		if (cantidad_maquina <= 21) {
			txtTotalPc->Text = cantidad_maquina.ToString();
			obj->Ingresar(carta_pc);

			CLista<Personaje*> Aux = obj->GetAtrPersonaje();

			lsbMaquina->Items->Add("Carta con Numero :" + Aux.obtenerPos(i)->GetCarta().ToString());
			aux = aux + carta_pc;
		}
		i++;
	}
	else {
		cantidad_maquina = aux;
		aux = cantidad_maquina;
		if (cantidad_maquina != cantidad_acumulada) {
			if (cantidad_maquina > cantidad_acumulada) {
				Maquina->Enabled = false;
				MessageBox::Show("   GANA LA CASA");
				int dinero = Convert::ToInt32(txtDineroActual->Text) - Convert::ToInt32(txtApuesta->Text);
				txtDineroActual->Text = dinero.ToString();
				Reinicio();


			}
			else {
				Maquina->Enabled = false;
				MessageBox::Show("   GANASTE");
				int dinero = Convert::ToInt32(txtDineroActual->Text) + Convert::ToInt32(txtApuesta->Text);
				txtDineroActual->Text = dinero.ToString();
				Reinicio();

			}


		}
		else {
			Maquina->Enabled = false;
			MessageBox::Show("   EMPATES");
			Reinicio();

		}


	}



}
private: System::Void Verificacion_cantidad_dinero_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (Convert::ToInt32(txtDineroActual->Text) == 0) {
		Verificacion_cantidad_dinero->Enabled = false;
		MessageBox::Show("Se te acabo el dinero se acabo el juego");
		Application::Exit();

	}
}
private: System::Void btnSI_Click(System::Object^  sender, System::EventArgs^  e) {

	if (Convert::ToInt32(txtApuesta->Text) > 20 && Convert::ToInt32(txtApostado->Text) > 20) {
		btnNO->Enabled = true;
		int carta_personaje = Random::Random().Next(1, 14);
		cantidad_acumulada = cantidad_acumulada + carta_personaje;
		txtTotal->Text = cantidad_acumulada.ToString();
		obj->Ingresar(carta_personaje);
		lsbPersonaje->Items->Clear();
		CLista<Personaje*> Aux = obj->GetAtrPersonaje();
		for (int i = 0; i < Aux.longitud(); i++)
		{
			lsbPersonaje->Items->Add("Carta con Numero :" + Aux.obtenerPos(i)->GetCarta().ToString());
		}
		if (cantidad_acumulada > 21) {
			btnSI->Enabled = false;
			btnNO->Enabled = false;
			MessageBox::Show("    PERDISTE"
				+ " \n Tu total fue de :" + txtTotal->Text
			);

			int dinero = Convert::ToInt32(txtDineroActual->Text) - Convert::ToInt32(txtApuesta->Text);
			txtDineroActual->Text = dinero.ToString();
			obj->Limpiar();
			lsbPersonaje->Items->Clear();
			cantidad_acumulada = 0;
			txtApuesta->Text = "00";
			txtApostado->Text = "00";
			txtTotal->Text = "0";
			btnSI->Enabled = true;
			btnNO->Enabled = false;
		}
	}
	else {
		if (Convert::ToInt32(txtApuesta->Text) != Convert::ToInt32(txtApostado->Text)) {
			MessageBox::Show("Porfavor presiona 'OK' para realizar la apuesta");
		}
		else {
			MessageBox::Show("Su apuesta debe ser MAYOR A 20");
			txtApuesta->Text = "00";
		}
	}

}
private: System::Void btnPartidas_Click(System::Object^  sender, System::EventArgs^  e) {
	HistorialPartidas^ frm = gcnew HistorialPartidas;
	frm->Show();

}
};
}
