object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Colors'
  ClientHeight = 259
  ClientWidth = 239
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 239
    Height = 259
    Align = alClient
    TabOrder = 0
    ExplicitHeight = 210
    object SpeedButton1: TSpeedButton
      AlignWithMargins = True
      Left = 11
      Top = 11
      Width = 217
      Height = 22
      Margins.Left = 10
      Margins.Top = 10
      Margins.Right = 10
      Align = alTop
      Caption = 'Gera cor'
      OnClick = SpeedButton1Click
      ExplicitLeft = 112
      ExplicitTop = 96
      ExplicitWidth = 23
    end
    object Memo1: TMemo
      AlignWithMargins = True
      Left = 11
      Top = 39
      Width = 217
      Height = 210
      Margins.Left = 10
      Margins.Right = 10
      Align = alTop
      Lines.Strings = (
        'cor_inicial = 0x00001A; '
        'cor_final = 0xFF001A; '
        'steps = 3;'
        ''
        'Output:'
        '')
      ScrollBars = ssVertical
      TabOrder = 0
    end
  end
end
