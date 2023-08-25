#Include "hwgui.ch"
#include "Directry.ch"
#include "FILEIO.CH"
#include 'common.ch'
#include 'error.ch'
#include "hbmemory.ch"
#include 'hbclass.ch'
#include "hbcompat.ch"

*-* Cores do browser *-*
#define x_BLUE        9522970
#define x_DARKBLUE   10027008
#define x_WHITE      16777215
#define x_CYAN       16776960
#define x_CYAN_2     16777062
#define x_BLACK             0
#define x_RED             255
#define x_GREEN       4227072
#define x_GRAY        8421504 && CINZA
#define x_YELLOW      8978431
#define x_YELLOW_2   11796479
#define x_ORANGE        33023
#define x_ORANGE_2    7715583
#define x_LIGHT_GRAY 13224393 
#define x_MARRON        15479 

#DEFINE Aspa  CHR(39)
#DEFINE ASPA  CHR(39)
#DEFINE aspa  CHR(39)

#define CR_LF chr(13)+chr(10)
#define LF chr(13)+chr(10)
#define lf chr(13)+chr(10)

#Define aDDD {"11","12","13","14","15","16","17","18","19","21","22","24","27","28","31","32","33","34","35","37","38","41","42",;
              "43","44","45","46","47","48","49","51","53","54","55","61","62","63","64","65","66","67","68","69","71","73","74",;
				  "75","77","79","81","82","83","84","85","86","87","88","89","91","92","93","94","95","96","97","98","99"}

#DEFINE aUF {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA",;
             "PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO","EX"}

#DEFINE RGB( nR,nG,nB ) ( nR + ( nG * 256 ) + ( nB * 256 * 256 ) )

#xcommand DEFAULT <uVar1> := <uVal1> ;
             [, <uVarN> := <uValN> ] ;
          => ;
          <uVar1> := IIf( <uVar1> == nil, <uVal1>, <uVar1> ) ;;
          [ <uVarN> := IIf( <uVarN> == nil, <uValN>, <uVarN> ); ]


