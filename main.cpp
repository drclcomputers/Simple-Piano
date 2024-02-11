#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"\n                  Virtual Piano - ver 0.2\n\n     Unleash your piano skills in this small demo!!!\n\n          (Tip: press 'x' to exit)\n\n Press any key from 'a' to 'l'. Each letter is 100Hz higher\n than the precedent one.\n\n Change the octave by pressing from '1' to '5'.";
    char key;
    int octave=100;
    while(key!='x'){
        key=_getch();
        if(key=='a')
            Beep(octave*2, 125);
        if(key=='s')
            Beep(octave*3, 125);
        if(key=='d')
            Beep(octave*4, 125);
        if(key=='f')
            Beep(octave*5, 125);
        if(key=='g')
            Beep(octave*6, 125);
        if(key=='h')
            Beep(octave*7, 125);
        if(key=='j')
            Beep(octave*8, 125);
        if(key=='k')
            Beep(octave*9, 125);
        if(key=='l')
            Beep(octave*10, 125);

        if(key=='1')
            octave=100;
        if(key=='2')
            octave=150;
        if(key=='3')
            octave=200;
        if(key=='4')
            octave=250;
        if(key=='5')
            octave=300;
    }
    return 0;
}
