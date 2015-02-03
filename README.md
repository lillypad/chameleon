 ▄████▄   ██░ ██  ▄▄▄       ███▄ ▄███▓▓█████  ██▓    ▓█████  ▒█████   ███▄    █ 
▒██▀ ▀█  ▓██░ ██▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀ ▓██▒    ▓█   ▀ ▒██▒  ██▒ ██ ▀█   █ 
▒▓█    ▄ ▒██▀▀██░▒██  ▀█▄  ▓██    ▓██░▒███   ▒██░    ▒███   ▒██░  ██▒▓██  ▀█ ██▒
▒▓▓▄ ▄██▒░▓█ ░██ ░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄ ▒██░    ▒▓█  ▄ ▒██   ██░▓██▒  ▐▌██▒
▒ ▓███▀ ░░▓█▒░██▓ ▓█   ▓██▒▒██▒   ░██▒░▒████▒░██████▒░▒████▒░ ████▓▒░▒██░   ▓██░
░ ░▒ ▒  ░ ▒ ░░▒░▒ ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░░ ▒░▓  ░░░ ▒░ ░░ ▒░▒░▒░ ░ ▒░   ▒ ▒ 
  ░  ▒    ▒ ░▒░ ░  ▒   ▒▒ ░░  ░      ░ ░ ░  ░░ ░ ▒  ░ ░ ░  ░  ░ ▒ ▒░ ░ ░░   ░ ▒░
░         ░  ░░ ░  ░   ▒   ░      ░      ░     ░ ░      ░   ░ ░ ░ ▒     ░   ░ ░ 
░ ░       ░  ░  ░      ░  ░       ░      ░  ░    ░  ░   ░  ░    ░ ░           ░ 
░                                                                               
|------------------------------------------------|
|                      _       _._               |
|               _,,-''' ''-,_ }'._''.,_.=._      |
|            ,-'      _ _    '        (  @)'-,   |
|          ,'  _..==;;::_::'-     __..----'''}   |
|         :  .'::_;==''       ,'',: : : '' '}    |
|        }  '::-'            /   },: : : :_,'    |
|       :  :'     _..,,_    '., '._-,,,--\'    _ |
|      :  ;   .-'       :      '-, ';,__\.\_.-'  |
|     {   '  :    _,,,   :__,,--::',,}___}^}_.-' |
|     }        _,'__''',  ;_.-''_.-'             |
|    :      ,':-''  ';, ;  ;_..-'                |
|_.-' }    ,',' ,''',  : ^^                      |
|_.-''{    { ; ; ,', '  :                        |
|      }   } :  ;_,' ;  }                        |
|       {   ',',___,'   '                        |
|        ',           ,'                         |
|          '-,,__,,-'                            |
|------------------------------------------------|

About Chameleon:
- Version:0.2b
- Author: Lilly Chalupowski

Disclaimer: Use this program at your own risk

Build Notes 0.2b:
	- Code Cleanup (needs more work)
	- Added random key generator
Build Notes 0.1b:
	- Added custom character support
	- Added encode support
	- Added decode support
	- Added progress bar support
	- Added std-out support
	- Added multithreaded support
	- Added easter egg ;)
	- Needs code cleanup

Building Chameleon:
	1. apt-get install make
	   make -j #For Multi Threaded Chameleon
	   OR
	   gcc chameleon.c -o chameleon #For Single Threaded Chameleon
	2. ./chameleon
	3. ENJOY!

To Re-Compile: 
1. rm chameleon
2. Follow Building Chameleon section

For Help: ./chameleon --help

PS: Chameleon will take remainder bits into consideration base64 default on linux does not ;)
