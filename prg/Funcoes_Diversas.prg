********************************************************************* 
FUNCTION MYRUN()     //Rotina para executar programas externos no XP.
PARAMETERS cComando
********************************************************************* 
local oShell, RET

oShell := CreateObject( "WScript.Shell" )
RET    := oShell:Run( cComando, 0, .T. )
oShell := NIL

RETURN if( RET == 0, .T., .F. )

********************************************************************************
FUNCTION INTERNETOK()
********************************************************************************
local aHosts, cName, cAddress := "www.google.com.br"
InetInit()
aHosts := InetGetHosts( cAddress )
if aHosts == NIL .or. len(aHosts) == 0
   InetCleanup()
   return .F.
endif
InetCleanup()
RETURN .T.
