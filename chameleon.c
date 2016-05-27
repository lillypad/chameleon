//CAMELEON BASE 64 ENCODER
//Author: Lilly Chalupowski
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Single Byte Data Structure
struct byteStruct{char byte;};

//Binary to integer
int bin2int(const char *str){
	int val = 0;
	while (*str != '\0'){
		val = 2 * val + (*str++ - '0');
	}
	return val;
}

//Usage Function
void usage(){
	printf("  ____\n");
	printf("/@    ~-.\n");
	printf("\\/ __ .- |\n");
	printf(" // //  @\n");
	printf("Version: 0.2b\n");
	printf("Usage: chameleon (--encode || --decode) -i input_file -o output_file --std-out --ccs --about --rand_key\n--encode   = encode mode\n--decode   = decode mode\n-i         = input file\n-o         = output file\n-ccs       = custom character set (64 unique chars)\n--about    = about screen\n--rand_key = Generates random base 64 key\n");
}

void about(){
	printf("  ____\n");
	printf("/@    ~-.\n");
	printf("\\/ __ .- |\n");
	printf(" // //  @\n");
	printf("Version: 0.2b\n");
	printf("Author: Lilly Chalupowski\n");
	printf("Company: ARC Network Security\n");
	printf("Disclaimer: Use at your own risk\n");
	printf("Usage: chameleon (--encode || --decode) -i input_file -o output_file --std-out --ccs\n--encode = encode mode\n--decode = decode mode\n-i = input file\n-o = output file\n-ccs = custom character set (64 unique chars)\n");
}

void secret(){
	printf("                      _       _._\n");
	printf("               _,,-''' ''-,_ }'._''.,_.=._\n");
	printf("            ,-'      _ _    '        (  @)'-,\n");
	printf("          ,'  _..==;;::_::'-     __..----'''}\n");
	printf("         :  .'::_;==''       ,'',: : : '' '}\n");
	printf("        }  '::-'            /   },: : : :_,'\n");
	printf("       :  :'     _..,,_    '., '._-,,,--\'    _\n");
	printf("      :  ;   .-'       :      '-, ';,__\\.\\_.-'\n");
	printf("     {   '  :    _,,,   :__,,--::',,}___}^}_.-'\n");
	printf("     }        _,'__''',  ;_.-''_.-'\n");
	printf("    :      ,':-''  ';, ;  ;_..-'\n");
	printf("_.-' }    ,',' ,''',  : ^^\n");
	printf("_.-''{    { ; ; ,', '  :\n");
	printf("      }   } :  ;_,' ;  }\n");
	printf("       {   ',',___,'   '\n");
	printf("        ',           ,'\n");
	printf("          '-,,__,,-'\n");
}

//Custom Character Set Checker
int ccsChecker(const char *base64custom){
	int i = 0;
	int j = 0;
	for (i = 0; i <= 63; i++){
		for (j = 0; j <= 63; j++){
			if(base64custom[i] == base64custom[j]){
				fprintf(stderr, "ERROR: Custom character set not all unique characters\n");
				usage();
				return 1;
			}
		}
	}
}

//Progress Bar
void progressBar(int start, int end){
        int percent = (start / (float)end) * 100;
        if (percent == 0){fflush(stdout); printf("[                    ]%d\r", percent);}
        if (percent == 5){fflush(stdout); printf("[#                   ]%d\r", percent);}
        if (percent == 10){fflush(stdout); printf("[##                  ]%d\r", percent);}
        if (percent == 15){fflush(stdout); printf("[###                 ]%d\r", percent);}
        if (percent == 20){fflush(stdout); printf("[####                ]%d\r", percent);}
        if (percent == 25){fflush(stdout); printf("[#####               ]%d\r", percent);}
        if (percent == 30){fflush(stdout); printf("[######              ]%d\r", percent);}
        if (percent == 35){fflush(stdout); printf("[#######             ]%d\r", percent);}
        if (percent == 40){fflush(stdout); printf("[########            ]%d\r", percent);}
        if (percent == 45){fflush(stdout); printf("[#########           ]%d\r", percent);}
        if (percent == 50){fflush(stdout); printf("[##########          ]%d\r", percent);}
        if (percent == 55){fflush(stdout); printf("[###########         ]%d\r", percent);}
        if (percent == 60){fflush(stdout); printf("[############        ]%d\r", percent);}
        if (percent == 65){fflush(stdout); printf("[#############       ]%d\r", percent);}
        if (percent == 70){fflush(stdout); printf("[##############      ]%d\r", percent);}
        if (percent == 75){fflush(stdout); printf("[###############     ]%d\r", percent);}
        if (percent == 80){fflush(stdout); printf("[################    ]%d\r", percent);}
        if (percent == 85){fflush(stdout); printf("[#################   ]%d\r", percent);}
        if (percent == 90){fflush(stdout); printf("[##################  ]%d\r", percent);}
        if (percent == 95){fflush(stdout); printf("[################### ]%d\r", percent);}
        if (percent == 100){printf("[####################]%d COMPLETE!\n", percent);}
}

//Get File Size
int getFileSize(FILE *fp){
	int sz;
	fseek(fp, 0L, SEEK_END);
	sz = ftell(fp);
	return sz;
}

//Convert from binary to decimal
int bin2dec(int binaryNumber){
	int decimalNumber=0,j=1,remainder;
	while(binaryNumber!=0){
		remainder=binaryNumber%10;
		decimalNumber=decimalNumber+remainder*j;
		j=j*2;
		binaryNumber=binaryNumber/10;
	}
	return decimalNumber;
}

const char *rand_key(){
	char base64[64] = {'A', 'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/'};
	char base64custom[64];
	static char final[64];
	int i = 0;
	int j = 0;
	int k = 0;
	int r;
	int retry = 0;
	srand( (unsigned)time( NULL ) );
	for (i = 0; i <= 63; i++){
		for (k = 0; k <= rand(); k++){
			r = rand() % 64;
		}
		base64custom[i] = base64[r];
		for (j = 0; j <= 63; j++){
			if (i != j){
				if ((char)base64custom[i] == (char)base64custom[j]){
					retry = 1;
				}
			}
		}
		if (retry == 1){
			retry = 0;
			i--;
		}
	}

	i = 0;
	for (i = 0; i <= 63; i++){
		final[i] = base64custom[i];
	}
	return final;
}

//Main Program
int main(int argc, char *argv[]){
	//Global Variables
	int i;
	int j;

	int dec = 0;
	int zero = 0;
	int one = 1;
	const char *strTemp;
	char bin[8];
	//Clear garbage data
	memset(bin, 0, sizeof(bin));

	char binaryByte[6];
	char chrOutputFile;
	//Clear garbage data
	memset(binaryByte, 0, sizeof(binaryByte));
	int pos = 0;
	FILE *ptrInputFile;
	FILE *ptrOutputFile;
	struct byteStruct singleByte;
	int stdout = 0;
	int infile = 0;
	int outfile = 0;
	//Base 64 alpha and binary arrays
	char base64[64] = {'A', 'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/'};
	static const char *base64binary[] = {"000000", "000001", "000010", "000011", "000100", "000101", "000110", "000111", "001000", "001001", "001010", "001011", "001100", "001101", "001110", "001111", "010000", "010001", "010010", "010011", "010100", "010101", "010110", "010111", "011000", "011001", "011010", "011011", "011100", "011101", "011110", "011111", "100000", "100001", "100010", "100011", "100100", "100101", "100110", "100111", "101000", "101001", "101010", "101011", "101100", "101101", "101110", "101111", "110000", "110001", "110010", "110011", "110100", "110101", "110110", "110111", "111000", "111001", "111010", "111011", "111100", "111101", "111110", "111111"};
	static const char *base64test[0];
	int encode = 0;
	int decode = 0;
	int encode_loop = 0;
	int decode_loop = 0;
	int encode_decode = 0;
	int boolCustomCharSet = 0;
	int random_key = 0;
	static const char *base64custom;
	//static const char *base64custom2;
	int custom_loop = 0;

	for (i = 0; i <= argc -1; i++){
			if(strcmp(argv[i], "--about") == 0){
				about();
				return 0;
			}
			if(strcmp(argv[i], "--secret") == 0){
				secret();
				return 0;
			}
			if(strcmp(argv[i], "--encode") == 0){
				encode = 1;
			}
			if(strcmp(argv[i], "--decode") == 0){
				decode = 1;
			}
			if (strcmp(argv[i], "--std-out") == 0){
				stdout = 1;
			}
			if (strcmp(argv[i], "--rand_key") == 0){
				random_key = 1;
				printf("%s\n", rand_key());
				return 0;
			}
			//Custom Character Set Handler
			if (strcmp(argv[i], "-ccs") == 0){
				boolCustomCharSet = 1;
				if (strlen(argv[i+1]) != 64){
					fprintf(stderr, "ERROR: Custom character set must be 64 characters.\n");
					usage();
					return 1;
				}
				if (strlen(argv[i+1]) == 64){
					base64custom = argv[i+1];
					for (custom_loop = 0; custom_loop <= 63; custom_loop++){
						base64[custom_loop] = base64custom[custom_loop];
					}
					int i2 = 0;
					int j2 = 0;
					for (i2 = 0; i2 <= 63; i2++){
						for (j2 = 0; j2 <= 63; j2++){
							if (i2 != j2){
								if ((char)base64custom[i2] == (char)base64custom[j2]){
									fprintf(stderr, "ERROR: Custom character set requires all unique characters\n");
									usage();
									return 1;
								}
							}
						}
					}
				}
			}

			if ((strcmp(argv[i], "-h") == 0) || (strcmp(argv[i], "--help") == 0)){
				usage();
				return 0;
			}
	}
	i = 0;

	if ((encode == 1) && (decode == 1)){
		fprintf(stderr, "ERROR: Choose --decode or --encode not both\n");
		usage();
		return 1;
	}
	if((encode == 0) && (decode == 0)){
		fprintf(stderr, "ERROR: Please specify --encode or --decode\n");
		usage();
		return 1;
	}

	//Encode Argument Checker
	if((encode == 1) && (decode == 0)){
		for (encode_loop = 0; encode_loop <= argc -1; encode_loop++){
			if((strcmp(argv[encode_loop], "-h") == 0) || (strcmp(argv[encode_loop], "--help") == 0)){
				usage();
				return 0;
			}
			if (strcmp(argv[encode_loop],"-o") ==  0){
				ptrOutputFile = fopen(argv[encode_loop+1], "wb");
				outfile = 1;
			}
			if(strcmp(argv[encode_loop],"-i") == 0){
				ptrInputFile = fopen(argv[encode_loop+1], "rb");
				if (!ptrInputFile){fprintf(stderr, "ERROR: Unable to read file specified.\n"); usage(); return 1;}
				infile = 1;
			}
			if (strcmp(argv[encode_loop], "--std-out") == 0){
				stdout = 1;
			}
		}
		if (infile != 1){fprintf(stderr, "ERROR: Provide input file\n"); usage(); return 1;}
                if ( (outfile != 1) && (stdout != 1) ){fprintf(stderr, "ERROR: Provide at least -o or --std-out\n"); usage(); return 1;}

	}
	//Decode Argument Checker
	if((decode == 1) && (encode == 0)){
		for (decode_loop = 0; decode_loop <= argc -1; decode_loop++){
			if (strcmp(argv[decode_loop], "-i") == 0){
				ptrInputFile = fopen(argv[decode_loop+1], "rb");
				if (!ptrInputFile){fprintf(stderr, "Unable to read file specified\n"); usage(); return 1;}
				infile = 1;
			}
			if (strcmp(argv[decode_loop], "-h") == 0){
				usage();
				return 0;
			}
			if (strcmp(argv[decode_loop], "-o") == 0){
				ptrOutputFile = fopen(argv[decode_loop+1], "wb");
				outfile = 1;
			}
		}
		if (infile != 1){fprintf(stderr, "ERROR: Provide input file\n"); usage(); return 1;}
		if ( (outfile != 1) && (stdout != 1) ){fprintf(stderr, "ERROR: Provide at least -o or --std-out\n"); usage(); return 1;}
	}

	//Decode Handler
	i = 0;
	pos = 0;
	j = 0;
	if ((encode == 0) && (decode == 1)){
		for (pos = 0; pos <= getFileSize(ptrInputFile)-2; pos ++){
			fseek(ptrInputFile, sizeof(struct byteStruct)*pos, SEEK_SET);
			fread(&singleByte, sizeof(struct byteStruct),1,ptrInputFile);
			for (i = 0; i <= 63; i++){
				if (singleByte.byte == base64[i]){
					strTemp = base64binary[i];
					for (j = 0; j<= 5; j++){
						if (strTemp[j] == '1'){
							strcat(bin, "1");
						}
						if (strTemp[j] == '0'){
							strcat(bin, "0");
						}
						if (strlen(bin) == 8){
							dec = bin2int(bin);
							if (stdout == 1){
								printf("%c",dec);
							}
							if (outfile == 1){
								fwrite (&dec, 1, 1, ptrOutputFile);
							}
							memset(bin, 0, sizeof(bin));
						}
					}
				}
			}
			if(stdout !=1){progressBar(pos, getFileSize(ptrInputFile)-2);}
		}
		memset(bin, 0, sizeof(bin));
		fclose(ptrInputFile);
		if (outfile == 1){
			fclose(ptrOutputFile);
		}
		return 0;
	}

	//Encode Handler
	if ((encode == 1) && (decode == 0)){
	for (pos = 0; pos <= getFileSize(ptrInputFile); pos++){
		fseek(ptrInputFile,sizeof(struct byteStruct)*pos, SEEK_SET);
		fread(&singleByte,sizeof(struct byteStruct),1,ptrInputFile);
		for (i = 7; i >= 0; i--){
			if (singleByte.byte & (1 << i)){
				strcat(binaryByte, "1");
			}
			else{
				strcat(binaryByte,"0");
			}
			if (strlen(binaryByte) == 6){
				for (j = 0; j <= 63; j++){
					if(strcmp(binaryByte, base64binary[j]) == 0){
						if (stdout == 1){
							printf("%c", base64[j]);
						}
						if (outfile == 1){
							chrOutputFile = base64[j];
							if (stdout != 1){
								progressBar(pos, getFileSize(ptrInputFile));
							}
							fwrite (&chrOutputFile, 1, 1, ptrOutputFile);
						}
					}
				}
				memset(binaryByte, 0, sizeof(binaryByte));
			}
		}
	}
	//Remainder Bit Handler
	//This is good practice and the default base64 encoder doesn't have this feature ;) n00bs :p
	if (strlen(binaryByte) >= 1){
		if (stdout == 1){
			printf("%c",base64[bin2dec(atoi(binaryByte))]);
		}
		if (outfile == 1){
			chrOutputFile = base64[bin2dec(atoi(binaryByte))];
			fwrite (&chrOutputFile, 1, 1, ptrOutputFile);
		}

	}
	if (stdout == 1){
		printf("\n");
	}
	memset(binaryByte, 0, sizeof(binaryByte));
	fclose(ptrInputFile);
	}
	return 0;
}
