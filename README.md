###########<br />
#CHAMELEON#<br />
###########<br />
<br />
About Chameleon:<br />
- Version: 0.2b<br />
- Author: Lilly Chalupowski<br />

Disclaimer: Use this program at your own risk<br />

Build Notes 0.2b:<br />
	- Code Cleanup (needs more work)<br />
	- Added random key generator<br />
Build Notes 0.1b:<br />
	- Added custom character support<br />
	- Added encode support<br />
	- Added decode support<br />
	- Added progress bar support<br />
	- Added std-out support<br />
	- Added multithreaded support<br />
	- Added easter egg ;)<br />
	- Needs code cleanup<br />
<br />
Building Chameleon:<br />
	1. apt-get install make<br />
	   make -j #For Multi Threaded Chameleon<br />
	   OR<br />
	   gcc chameleon.c -o chameleon #For Single Threaded Chameleon<br />
	2. ./chameleon<br />
	3. ENJOY!<br />

To Re-Compile: <br />
1. rm chameleon<br />
2. Follow Building Chameleon section<br />
<br />
For Help: ./chameleon --help<br />
<br />
PS: Chameleon will take remainder bits into consideration base64 default on linux does not ;)<br />
