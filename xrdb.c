void
loadxrdb()
{
	Display *display;
	char * resm;
	XrmDatabase xrdb;
	char *type;
	XrmValue value;

	display = XOpenDisplay(NULL);

	if (display != NULL) {
		resm = XResourceManagerString(display);

		if (resm != NULL) {
			xrdb = XrmGetStringDatabase(resm);

			if (xrdb != NULL) {
				XRDB_LOAD_COLOR("dwm.normfgcolor", normfgcolor);
				XRDB_LOAD_COLOR("dwm.normbgcolor", normbgcolor);
				XRDB_LOAD_COLOR("dwm.normbordercolor", normbordercolor);
				XRDB_LOAD_COLOR("dwm.normfloatcolor", normfloatcolor);
				XRDB_LOAD_COLOR("dwm.selfgcolor", selfgcolor);
				XRDB_LOAD_COLOR("dwm.selbgcolor", selbgcolor);
				XRDB_LOAD_COLOR("dwm.selbordercolor", selbordercolor);
				XRDB_LOAD_COLOR("dwm.selfloatcolor", selfloatcolor);
				XRDB_LOAD_COLOR("dwm.titlenormfgcolor", titlenormfgcolor);
				XRDB_LOAD_COLOR("dwm.titlenormbgcolor", titlenormbgcolor);
				XRDB_LOAD_COLOR("dwm.titlenormbordercolor", titlenormbordercolor);
				XRDB_LOAD_COLOR("dwm.titlenormfloatcolor", titlenormfloatcolor);
				XRDB_LOAD_COLOR("dwm.titleselfgcolor", titleselfgcolor);
				XRDB_LOAD_COLOR("dwm.titleselbgcolor", titleselbgcolor);
				XRDB_LOAD_COLOR("dwm.titleselbordercolor", titleselbordercolor);
				XRDB_LOAD_COLOR("dwm.titleselfloatcolor", titleselfloatcolor);
				XRDB_LOAD_COLOR("dwm.tagsnormfgcolor", tagsnormfgcolor);
				XRDB_LOAD_COLOR("dwm.tagsnormbgcolor", tagsnormbgcolor);
				XRDB_LOAD_COLOR("dwm.tagsnormbordercolor", tagsnormbordercolor);
				XRDB_LOAD_COLOR("dwm.tagsnormfloatcolor", tagsnormfloatcolor);
				XRDB_LOAD_COLOR("dwm.tagsselfgcolor", tagsselfgcolor);
				XRDB_LOAD_COLOR("dwm.tagsselbgcolor", tagsselbgcolor);
				XRDB_LOAD_COLOR("dwm.tagsselbordercolor", tagsselbordercolor);
				XRDB_LOAD_COLOR("dwm.tagsselfloatcolor", tagsselfloatcolor);
				XRDB_LOAD_COLOR("dwm.hidnormfgcolor", hidnormfgcolor);
				XRDB_LOAD_COLOR("dwm.hidnormbgcolor", hidnormbgcolor);
				XRDB_LOAD_COLOR("dwm.hidselfgcolor", hidselfgcolor);
				XRDB_LOAD_COLOR("dwm.hidselbgcolor", hidselbgcolor);
				XRDB_LOAD_COLOR("dwm.urgfgcolor", urgfgcolor);
				XRDB_LOAD_COLOR("dwm.urgbgcolor", urgbgcolor);
				XRDB_LOAD_COLOR("dwm.urgbordercolor", urgbordercolor);
				XRDB_LOAD_COLOR("dwm.urgfloatcolor", urgfloatcolor);
				#if RENAMED_SCRATCHPADS_PATCH
				XRDB_LOAD_COLOR("dwm.scratchselfgcolor", scratchselfgcolor);
				XRDB_LOAD_COLOR("dwm.scratchselbgcolor", scratchselbgcolor);
				XRDB_LOAD_COLOR("dwm.scratchselbordercolor", scratchselbordercolor);
				XRDB_LOAD_COLOR("dwm.scratchselfloatcolor", scratchselfloatcolor);
				XRDB_LOAD_COLOR("dwm.scratchnormfgcolor", scratchnormfgcolor);
				XRDB_LOAD_COLOR("dwm.scratchnormbgcolor", scratchnormbgcolor);
				XRDB_LOAD_COLOR("dwm.scratchnormbordercolor", scratchnormbordercolor);
				XRDB_LOAD_COLOR("dwm.scratchnormfloatcolor", scratchnormfloatcolor);
				#endif // RENAMED_SCRATCHPADS_PATCH
				#if BAR_FLEXWINTITLE_PATCH
				XRDB_LOAD_COLOR("dwm.normTTBbgcolor", normTTBbgcolor);
				XRDB_LOAD_COLOR("dwm.normLTRbgcolor", normLTRbgcolor);
				XRDB_LOAD_COLOR("dwm.normMONObgcolor", normMONObgcolor);
				XRDB_LOAD_COLOR("dwm.normGRIDbgcolor", normGRIDbgcolor);
				XRDB_LOAD_COLOR("dwm.normGRD1bgcolor", normGRD1bgcolor);
				XRDB_LOAD_COLOR("dwm.normGRD2bgcolor", normGRD2bgcolor);
				XRDB_LOAD_COLOR("dwm.normGRDMbgcolor", normGRDMbgcolor);
				XRDB_LOAD_COLOR("dwm.normHGRDbgcolor", normHGRDbgcolor);
				XRDB_LOAD_COLOR("dwm.normDWDLbgcolor", normDWDLbgcolor);
				XRDB_LOAD_COLOR("dwm.normSPRLbgcolor", normSPRLbgcolor);
				XRDB_LOAD_COLOR("dwm.normfloatbgcolor", normfloatbgcolor);
				XRDB_LOAD_COLOR("dwm.actTTBbgcolor", actTTBbgcolor);
				XRDB_LOAD_COLOR("dwm.actLTRbgcolor", actLTRbgcolor);
				XRDB_LOAD_COLOR("dwm.actMONObgcolor", actMONObgcolor);
				XRDB_LOAD_COLOR("dwm.actGRIDbgcolor", actGRIDbgcolor);
				XRDB_LOAD_COLOR("dwm.actGRD1bgcolor", actGRD1bgcolor);
				XRDB_LOAD_COLOR("dwm.actGRD2bgcolor", actGRD2bgcolor);
				XRDB_LOAD_COLOR("dwm.actGRDMbgcolor", actGRDMbgcolor);
				XRDB_LOAD_COLOR("dwm.actHGRDbgcolor", actHGRDbgcolor);
				XRDB_LOAD_COLOR("dwm.actDWDLbgcolor", actDWDLbgcolor);
				XRDB_LOAD_COLOR("dwm.actSPRLbgcolor", actSPRLbgcolor);
				XRDB_LOAD_COLOR("dwm.actfloatbgcolor", actfloatbgcolor);
				XRDB_LOAD_COLOR("dwm.selTTBbgcolor", selTTBbgcolor);
				XRDB_LOAD_COLOR("dwm.selLTRbgcolor", selLTRbgcolor);
				XRDB_LOAD_COLOR("dwm.selMONObgcolor", selMONObgcolor);
				XRDB_LOAD_COLOR("dwm.selGRIDbgcolor", selGRIDbgcolor);
				XRDB_LOAD_COLOR("dwm.selGRD1bgcolor", selGRD1bgcolor);
				XRDB_LOAD_COLOR("dwm.selGRD2bgcolor", selGRD2bgcolor);
				XRDB_LOAD_COLOR("dwm.selGRDMbgcolor", selGRDMbgcolor);
				XRDB_LOAD_COLOR("dwm.selHGRDbgcolor", selHGRDbgcolor);
				XRDB_LOAD_COLOR("dwm.selDWDLbgcolor", selDWDLbgcolor);
				XRDB_LOAD_COLOR("dwm.selSPRLbgcolor", selSPRLbgcolor);
				XRDB_LOAD_COLOR("dwm.selfloatbgcolor", selfloatbgcolor);
				#endif // BAR_FLEXWINTITLE_PATCH
				#if BAR_STATUS2D_XRDB_TERMCOLORS_PATCH && BAR_STATUS2D_PATCH
				XRDB_LOAD_COLOR("color0", termcol0);
				XRDB_LOAD_COLOR("color1", termcol1);
				XRDB_LOAD_COLOR("color2", termcol2);
				XRDB_LOAD_COLOR("color3", termcol3);
				XRDB_LOAD_COLOR("color4", termcol4);
				XRDB_LOAD_COLOR("color5", termcol5);
				XRDB_LOAD_COLOR("color6", termcol6);
				XRDB_LOAD_COLOR("color7", termcol7);
				XRDB_LOAD_COLOR("color8", termcol8);
				XRDB_LOAD_COLOR("color9", termcol9);
				XRDB_LOAD_COLOR("color10", termcol10);
				XRDB_LOAD_COLOR("color11", termcol11);
				XRDB_LOAD_COLOR("color12", termcol12);
				XRDB_LOAD_COLOR("color13", termcol13);
				XRDB_LOAD_COLOR("color14", termcol14);
				XRDB_LOAD_COLOR("color15", termcol15);
				#endif // BAR_STATUS2D_XRDB_TERMCOLORS_PATCH

				XrmDestroyDatabase(xrdb);
			}
		}
	}

	XCloseDisplay(display);
}


/* Extended atoi function which can understand hex nums and translate them in dec */
int hexatoi(const char* s, int start, int end){
    int i, n;
    n = 0;
    for (i = start; ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f')) && i < end; ++i){
            switch(s[i]){
                case 'a':
                    n = 16 * n + 10; break;
                case 'b':
                    n = 16 * n + 11; break;
                case 'c':
                    n = 16 * n + 12; break;
                case 'd':
                    n = 16 * n + 13; break;
                case 'e':
                    n = 16 * n + 14; break;
                case 'f':
                    n = 16 * n + 15; break;
                default:
                    n = 16 * n + (s[i] - '0');
            }
    }

    return n;

}

#include <stdbool.h>
// Use it only with #RGB color!
bool islight(const char* color){

    int R, G, B;
    R = hexatoi(color, 1, 3);
    G = hexatoi(color, 3, 5);
    B = hexatoi(color, 5, 7);

    return (0.299 * (double)R + 0.587 * (double)G + 0.114 * (double)B) / 255.0 > 0.5;
}


void wallsctipt(){
	const char FilePathXres[] = "/home/archuser/.Xresources";
	const char FilePathWalCache[] = "/home/archuser/.cache/wal/colors";

    	system("wal -i /home/archuser/Wallpapers/ --saturate 0.9");

	FILE* fdWalCache = fopen(FilePathWalCache, "r");
    	FILE* fdXres = fopen(FilePathXres, "w");

   	if ( NULL == fdXres || NULL == fdWalCache){
        	exit(1);
    	}

	char color[8];
	int counter = 0;

	while (fscanf(fdWalCache, "%s", color) != EOF){
        switch (counter){
            case 0:
                break;
            case 1:
                fprintf(fdXres, "dwm.normbgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.titlenormbgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.tagsnormbgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.hidnormbgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.hidselbgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.urgbgcolor: %s\n",  color);
                /* text color based on bg */
                strncpy(color, islight(color) ? "#000000" : "#ffffff", 7);

                fprintf(fdXres, "dwm.normfgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.titlenormfgcolor: %s\n",  color);//
                fprintf(fdXres, "dwm.tagsnormfgcolor: %s\n",  color);//
                fprintf(fdXres, "dwm.urgfgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.titlenormbordercolor: %s\n",  color);//

                break;
            case 2:
                fprintf(fdXres, "dwm.tagsnormbordercolor: %s\n",  color);
                break;
            case 3:
                fprintf(fdXres, "dwm.normfloatcolor: %s\n",  color);
                fprintf(fdXres, "dwm.titlenormfloatcolor: %s\n",  color);
                fprintf(fdXres, "dwm.tagsnormfloatcolor: %s\n",  color);
                fprintf(fdXres, "dwm.urgfloatcolor: %s\n",  color);
                break;
            case 4:
		/* Just this color really sucks, i don't like it */
                break;
            case 5:
                fprintf(fdXres, "dwm.selbgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.selbordercolor: %s\n",  color);
                fprintf(fdXres, "dwm.selfloatcolor: %s\n",  color);
                fprintf(fdXres, "dwm.titleselbgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.titleselbordercolor: %s\n",  color);
                fprintf(fdXres, "dwm.titleselfloatcolor: %s\n",  color);
                fprintf(fdXres, "dwm.tagsselbgcolor: %s\n",  color);
                fprintf(fdXres, "dwm.tagsselbordercolor: %s\n",  color);
                fprintf(fdXres, "dwm.tagsselfloatcolor: %s\n",  color);
                fprintf(fdXres, "dwm.hidnormfgcolor: %s\n",  color);

                strncpy(color, islight(color) ? "#000000" : "#ffffff", 7);
                fprintf(fdXres, "dwm.titleselfgcolor: %s\n", color);
                fprintf(fdXres, "dwm.selfgcolor: %s\n",  color);
                break;
            case 6:
                fprintf(fdXres, "dwm.hidselfgcolor: %s\n",  color);
                break;
            case 7:
                fprintf(fdXres, "dwm.urgbordercolor: %s\n",  color);
                break;
            case 8:
                fprintf(fdXres, "dwm.normbordercolor: %s\n",  color);
                fprintf(fdXres, "dwm.tagsselfgcd color: %s\n",  color);

                break;
        }
        counter++;

    }

	fclose(fdWalCache);
	fclose(fdXres);

	const char command[1000]; // should be enough. Edit it if not
	sprintf(command, "xrdb -merge %s", FilePathXres);
	system(command);
}

void
xrdb(const Arg *arg)
{
	/* My modification */
    	wallsctipt();
	system("pywalfox update");
	/* End of modification */
	loadxrdb();
	int i;
	for (i = 0; i < LENGTH(colors); i++)
		scheme[i] = drw_scm_create(drw, colors[i],
		#if BAR_ALPHA_PATCH
		alphas[i],
		#endif // BAR_ALPHA_PATCH
		ColCount
		);
	focus(NULL);
	arrange(NULL);
}

