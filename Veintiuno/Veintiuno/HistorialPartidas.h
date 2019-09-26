#pragma once
#include "Partida.h"
#include "Pila.h"
#include "CLista.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;
namespace Veintiuno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de HistorialPartidas
	/// </summary>
	public ref class HistorialPartidas : public System::Windows::Forms::Form
	{
	public:
		HistorialPartidas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		Pila<Partida> * LeerHistorial() {
			ifstream Guardados;
			string Texto;
			Pila<Partida> *partidas = new Pila<Partida>();
			Guardados.open("HistorialDeJuego.txt", ios::in);
			if (Guardados.fail()) {
				lblHistorialVacio->Visible = true;				
				//exit(1);
			}
			else {
				lblHistorialVacio->Visible = false;
				int cant_user, cant_maqui;
				string result;
				
				while (!Guardados.eof())
				{
					Guardados >> cant_user >> cant_maqui >> result;					
					partidas->push(new Partida( cant_maqui, cant_user, result));
				}
			}

			Guardados.close();
			return partidas;
		}

		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~HistorialPartidas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^  panelPartidas;
	private: System::Windows::Forms::Label^  lblHistorialVacio;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelPartidas = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblHistorialVacio = (gcnew System::Windows::Forms::Label());
			this->panelPartidas->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(115, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Historial Partidas";
			this->label1->Click += gcnew System::EventHandler(this, &HistorialPartidas::label1_Click);
			// 
			// panelPartidas
			// 
			this->panelPartidas->ColumnCount = 4;
			this->panelPartidas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5.387647F)));
			this->panelPartidas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.53745F)));
			this->panelPartidas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.53745F)));
			this->panelPartidas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.53745F)));
			this->panelPartidas->Controls->Add(this->lblHistorialVacio, 2, 1);
			this->panelPartidas->Location = System::Drawing::Point(12, 51);
			this->panelPartidas->Name = L"panelPartidas";
			this->panelPartidas->RowCount = 2;
			this->panelPartidas->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->panelPartidas->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->panelPartidas->Size = System::Drawing::Size(512, 396);
			this->panelPartidas->TabIndex = 1;
			// 
			// lblHistorialVacio
			// 
			this->lblHistorialVacio->AutoSize = true;
			this->lblHistorialVacio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblHistorialVacio->ForeColor = System::Drawing::Color::Red;
			this->lblHistorialVacio->Location = System::Drawing::Point(191, 20);
			this->lblHistorialVacio->Name = L"lblHistorialVacio";
			this->lblHistorialVacio->Size = System::Drawing::Size(109, 100);
			this->lblHistorialVacio->TabIndex = 0;
			this->lblHistorialVacio->Text = L"Aun no tienes partidas jugadas !";
			// 
			// HistorialPartidas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(537, 459);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panelPartidas);
			this->Name = L"HistorialPartidas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HistorialPartidas";
			this->Load += gcnew System::EventHandler(this, &HistorialPartidas::HistorialPartidas_Load);
			this->panelPartidas->ResumeLayout(false);
			this->panelPartidas->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HistorialPartidas_Load(System::Object^  sender, System::EventArgs^  e) {
		
		Pila<Partida> *pila = LeerHistorial();
		pila->pop();
		int longitud = pila->leng();
		if (longitud !=0)
		{
			panelPartidas->ColumnCount = 5;
			panelPartidas->RowCount = 1;
			//panelPartidas->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 15));
			//panelPartidas->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 15));
			//panelPartidas->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 15));
			//panelPartidas->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 15));
			/*panelPartidas->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));*/

			Label ^ la1 = gcnew Label();
			la1->Text = "No.";
			panelPartidas->Controls->Add(la1, 1, 0);
			Label ^ la2 = gcnew Label();
			la2->Text = "Jugador";
			panelPartidas->Controls->Add(la2, 2, 0);
			Label ^ la3 = gcnew Label();
			la3->Text = "Maquina";
			panelPartidas->Controls->Add(la3, 3, 0);
			Label ^ la4 = gcnew Label();
			la4->Text = "Resultado";
			panelPartidas->Controls->Add(la4, 4, 0);


			for (int i = 0; i < longitud; i++)
			{
				panelPartidas->RowCount = panelPartidas->RowCount + 1;
				panelPartidas->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 20));
				Label ^ la1 = gcnew Label();
				la1->Text = "" + (longitud - i);
				panelPartidas->Controls->Add(la1, 1, panelPartidas->RowCount - 1);
				Label ^ la2 = gcnew Label();
				la2->Text = "" + pila->top()->getCantidadUsuario();
				panelPartidas->Controls->Add(la2, 2, panelPartidas->RowCount - 1);
				Label ^ la3 = gcnew Label();
				la3->Text = "" + pila->top()->getCantidadMaquina();
				panelPartidas->Controls->Add(la3, 3, panelPartidas->RowCount - 1);
				Label ^ la4 = gcnew Label();
				string resultado = pila->top()->getResultado();
				System::String^ str = gcnew System::String(pila->top()->getResultado().c_str());
				la4->Text = str;
				panelPartidas->Controls->Add(la4, 4, panelPartidas->RowCount - 1);

				pila->pop();
			}
		}
		
		
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
