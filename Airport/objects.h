#ifndef OBJECTS_H_INCLUDED
#define OBJECTS_H_INCLUDED



class Objects{
public:
    static void compra();
    static void abordar();
    static void taxi(int);
    static void avion(int);
    static void stop();
    static void city();
    static void beach();
};

void Objects::compra()
{

            gotoxy(40,0);cout<<"\t==Compra de Boletos=="<<endl;
            gotoxy(40,1); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            gotoxy(40,2); printf("%c AEROPUERTO INTERNACIONAL DE GUADALAJARA %c\n",186,186);
            gotoxy(40,3); printf("%c		BIENVENIDOS	          %c",186,186);
            gotoxy(40,4); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            gotoxy(102,5); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            gotoxy(102,6); printf("%c    TICKETS   %c",186,186);
            gotoxy(102,7); printf("%c		     %c",186,186);
            gotoxy(102,8); printf("%c   %c%c%c%c%c%c%c%c%c  %c",186, 218,196,196,196,196,196,196,196,191, 186);
            gotoxy(102,9); printf("%c	  %c   0   %c  %c",186,179,179,186);
            gotoxy(102,10); printf("%c	  %c  /|\\  %c  %c",186,179,179,186);
            gotoxy(102,11); printf("%c   %c%c%c%c%c%c%c%c%c  %c",186, 192,196,196,196,196,196,196,196,217, 186);
            gotoxy(102,12); printf("%c		     %c",186,186);
}
void Objects::abordar()
{

            gotoxy(40,0);cout<<"\t==Abordar Avion=="<<endl;
            gotoxy(100,1); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            gotoxy(100,2); printf("%c VUELO A CANCUN %c\n",186,186);
            gotoxy(100,3); printf("%c    PUERTA 5    %c",186,186);
            gotoxy(100,4);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
            gotoxy(99,5); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
            gotoxy(99,6); printf("%c       ___        %c",186,186);
            gotoxy(99,7); printf("%c  ___/ ___ \\ __   %c",186,186);
            gotoxy(99,8); printf("%c\\___|       |___/ %c",186, 186);
            gotoxy(99,9); printf("%c  0  \\_____/  0   %c",186,186);
            gotoxy(99,10); printf("%c	  |   |       %c",186,186);
            gotoxy(99,11); printf("%c______0___0_______%c",186, 186);
            gotoxy(99,12); printf("%c	  / %c \\       %c",186,221,186);
}
void Objects::taxi(int x)
{

    gotoxy(x,21);cout<<"                   [\ ";
    gotoxy(x,22);cout<<"              .----' `-----.";
    gotoxy(x,23);cout<<"             //----;;------`\ " ;
    gotoxy(x,24);cout<<"     ______//_____||________\\________";
    gotoxy(x,25);cout<<"    /231    |      |        |         \\ ";
    gotoxy(x,26);cout<<"   |>   ____|      |  TAXI  |  ____   _<)";
    gotoxy(x,27);cout<<" {____/    \_________________/    \\____}";
    gotoxy(x,28);cout<<"      \____/                 \____/";

}

void Objects::avion(int x)
{
    gotoxy(40,0);cout<<"\t==VOLANDO=="<<endl;
    gotoxy(x,10);cout<<"           _";
    gotoxy(x,11);cout<<"         -=\`\\";
    gotoxy(x,12);cout<<"     |\\ ____\\_\\__";
    gotoxy(x,13);cout<<"   -=\c`\"\"\"\"\"\"\" \"`)";
    gotoxy(x,14);cout<<"      `~~~~~/ /~~`";
    gotoxy(x,15);cout<<"        -==/ /";
    gotoxy(x,16);cout<<"          '-'";
}

void Objects::stop()
{
    gotoxy(40,0);cout<<"\t==TAXI=="<<endl;
    gotoxy(101,5);cout<<"   ____";
    gotoxy(101,6);cout<<"  /    \\";
    gotoxy(101,7);cout<<" | STOP |";
    gotoxy(101,8);cout<<"  \\ __ /";
    gotoxy(101,9);cout<<"    ||";
    gotoxy(101,10);cout<<"    ||";
    gotoxy(101,11);cout<<"    ||";
    gotoxy(101,12);cout<<" ~~~~~~~";
}
void Objects::city(){
gotoxy(30,19);cout<<"                       .| ";
gotoxy(30,20);cout<<"                       | | ";
gotoxy(30,21);cout<<"                       |'|           .  _____ ";
gotoxy(30,22);cout<<"               ______ |  |      ___    |.   |'.----| ";
gotoxy(30,23);cout<<"       _    .-'   --- |  |     .___'|  ||   |_|||    | ";
gotoxy(30,23);cout<<"    .-'|  _.|  |    ||   '-__  |   |  |    ||_|    |  ";
gotoxy(30,24);cout<<"    |' | |.    |    ||       | |   |  |    ||      |  ";
gotoxy(30,25);cout<<" ___|  '-'     '    ""         '-'   '-.'    '`      |____ ";
}

void Objects::beach(){
gotoxy(5,2);cout<<"              ,.  _~-.,               . ";
gotoxy(5,3);cout<<"           ~'`_ \/,_. \_  ";
gotoxy(5,4);cout<<"          / , _>@`,__`~.)            |           . ";
gotoxy(5,5);cout<<"          | |  @@@@'   ,! .          .          '  ";
gotoxy(5,6);cout<<"          |/   ^^@     .!  \          |         /  ";
gotoxy(5,7);cout<<"          `' .^^^     ,'    '        |        .             .  ";
gotoxy(5,8);cout<<"           .^^^   .          \        |       /          .  ";
gotoxy(5,9);cout<<"          .^^^       '  .     \       |      /       . '  ";
gotoxy(5,10);cout<<".,.,.     ^^^             ` .   .,+~'`^`'~+,.     , '  ";
gotoxy(5,11);cout<<"&&&&&&,  ,^^^^.  . ._ ..__ _  .'             '. '_ __ ____ __ _ .. .  . ";
gotoxy(5,12);cout<<"%%%%%%%%%^^^^^^%%&&;_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,  ";
gotoxy(5,13);cout<<"&&&&&%%%%%%%%%%%%%%%%%%&&;,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~= ";
gotoxy(5,14);cout<<"%%%%%&&&&&&&&&&&%%%%&&&_,.;^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__, ";
gotoxy(5,15);cout<<"%%%%%%%%%&&&&&&&&&-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-==--^'~=-.,__,.-=~' ";
gotoxy(5,16);cout<<"##mjy#####*'  ";
gotoxy(5,17);cout<<"_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,.-=~'`^`'~=-.,__,.-=~' ";

gotoxy(5,18);cout<<"~`'^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^  ";
}


#endif // OBJECTS_H_INCLUDED
