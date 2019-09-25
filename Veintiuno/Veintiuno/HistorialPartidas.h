#pragma once

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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Historial Partidas";
			// 
			// panelPartidas
			// 
			this->panelPartidas->ColumnCount = 4;
			this->panelPartidas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->panelPartidas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->panelPartidas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->panelPartidas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->panelPartidas->Location = System::Drawing::Point(12, 51);
			this->panelPartidas->Name = L"panelPartidas";
			this->panelPartidas->RowCount = 2;
			this->panelPartidas->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47)));
			this->panelPartidas->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53)));
			this->panelPartidas->Size = System::Drawing::Size(422, 396);
			this->panelPartidas->TabIndex = 1;
			// 
			// HistorialPartidas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(457, 459);
			this->Controls->Add(this->panelPartidas);
			this->Controls->Add(this->label1);
			this->Name = L"HistorialPartidas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HistorialPartidas";
			this->Load += gcnew System::EventHandler(this, &HistorialPartidas::HistorialPartidas_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HistorialPartidas_Load(System::Object^  sender, System::EventArgs^  e) {
		
		
		panelPartidas->ColumnCount = 4;
		panelPartidas->RowCount = 1;
		panelPartidas->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 15));
		panelPartidas->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 15));
		panelPartidas->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 15));
		panelPartidas->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 15));
		panelPartidas->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));

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
	}
	};
}
