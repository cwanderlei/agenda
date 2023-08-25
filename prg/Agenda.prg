/******************************************************************************  
 * Programa ....: Agenda.prg  
 * Autor .......: Fulano da Silva  
 * Sintese .....: Aplicativo de Agendas  
 * Data ........: 25/08/2023 às 11:04:44  
 * Revisado em .: 25/08/2023 às 11:04:44  
 ******************************************************************************/  
#include 'agenda.ch'  
  
********************************************************************************
FUNCTION Main()
********************************************************************************
LOCAL oDlg, oBrowse[2], oPage1
Local cHost := 'localhost', nPorta := 9200, NomeBanco := 'BDAGENDA'
Local cUsr := 'SYSDBA', cPass := 'masterkey', aDados := {}

Public oSql, vpUserDir := CurDrive()+ ":\" + CurDir()

//HB_LANGSELECT("PT")

set date BRITISH
Set Date Format "DD/MM/YYYY"
SET EXACT ON
SET SOFTSEEK OFF
SET OPTIMIZE ON 
SET EXCLUSIVE OFF
SET CONFIRM OFF
SET DELE ON
SET EPOCH TO 2000

SetColorinFocus(.t.,,16765557 )  && Seleciona a cor do get em destaque

&& Conectando no Banco de Dados
if !CONECTAR_SQL(cHost, nPorta, cPass, cUsr, NomeBanco)
	MsgInfo('Não foi possível conectar no banco de dados','Atenção')
   Quit
endif

cQuery := 'select nome, telefone from contatos order by nome'
oQuery := oSql:Query( cQuery )
oQuery:Skip()
DO WHILE !oQuery:Eof()
   AADD(aDados,{oQuery:Fieldget(1),;
				    oQuery:Fieldget(2)})
   oQuery:Skip()
ENDDO
oQuery:Close()

INIT DIALOG oDlg TITLE "Agenda" AT 0, 0 SIZE 710,648 NOEXIT  ;
   STYLE WS_POPUP+WS_CAPTION+WS_SYSMENU+WS_SIZEBOX+DS_CENTER 

   @ 8,13 BROWSE oBrowse[1] ARRAY SIZE 628,195 STYLE WS_TABSTOP      
	oBrowse[1]:aArray    := aDados
	oBrowse[1]:bColorSel := 16744448
	oBrowse[1]:headColor := 16711680
	oBrowse[1]:lEditable := .F.
	oBrowse[1]:lUpdated  := .T.
	oBrowse[1]:AddColumn( HColumn():New('Nome'    , ColumnArBlock() ,'C', 50, 0 ,.F.,1,1,'@!',,,,,,,,,))
	oBrowse[1]:AddColumn( HColumn():New('Telefone', ColumnArBlock() ,'C', 14, 0 ,.F.,1,1,'99999999999999',,,,,,,,,))


   //@ 643,15 BROWSE oBrowse[2] ARRAY SIZE 59,194 STYLE WS_TABSTOP      

    //oBrowse[2]:aArray := {}
    //oBrowse[2]:AddColumn( HColumn():New( ,{|v,o|Iif(v!=Nil,o:aArray[o:nCurrent]:=v,o:aArray[o:nCurrent])},'C',100,0))

   //@ 7,214 TAB oPage1 ITEMS {} SIZE 693,422  

ACTIVATE DIALOG oDlg 

oSql:Close()  && Fecha a conexão com o Banco e Dados

RETURN .T.

