/*
 * mini games(multi).cxx
 * 
 * Copyright 2018 Unknown <alles@Arch_AMD64>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <cstdlib>
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdio.h>
#ifdef _WIN32
    #include <windows.h>
    #define msleep(x) Sleep(x)
#else
    #include <unistd.h>
    #define msleep(x) usleep(x * 1000)
#endif

#ifdef __linux__
using namespace std;

int main(int argc, char **argv)
{
	int wibor;
	string a, b, c;
	string odin, dwa, tri;
	int odino, dwao, trio;
	cout << "Вас приветствуют мини игры\n";
	
	a = "#####   \n# A #   \n#####   \n";
	b = "#####   \n# B #   \n#####   \n";
	c = "#####   \n# C #   \n#####   \n";
	start:;
	cout << "(1) Крутить рулетку\n(2) Камень-ножницы-бумага\n(3) Выйти из программы\n";
	cin >> wibor; system ("clear");
	if(wibor == 1){
		int all=0;
		int win=0;
		int game;
		startroll:;
	cout << "(1) Крутить рулетку\n(2) Вернуться назад\n";
	cin >> game; system("clear");
	//В рулетке шанс победить~7-15%
	if(game==1){
	srand(time(NULL));
    odino = 1 + rand() % 3;
    dwao = 1 + rand() % 3;
    trio = 1 + rand() % 3;
    
    if(odino==1){odin=a;}
    if(odino==2){odin=b;}
    if(odino==3){odin=c;}
    
    if(dwao==1){dwa=a;}
    if(dwao==2){dwa=b;}
    if(dwao==3){dwa=c;}
    
    if(trio==1){tri=a;}
    if(trio==2){tri=b;}
    if(trio==3){tri=c;}
    
    if(odino == dwao){
	if(dwao == trio){
		cout << odin << dwa << tri << endl;all++;win++;
		cout << "\e[50;33;1mТы победил!!!\e[32;m       Счёт:"<<win<<"/"<<all <<endl;
	}}
	else {
		cout << odin << dwa << tri << endl;all++;
		cout << "\e[40;31;1mТы не победил...\e[32;m    Счёт:"<<win<<"/"<<all <<endl;msleep(300);goto startroll;}
	if(odino == trio){
	if(dwao == trio){
	}}
	else {
		cout << odin << dwa << tri << endl;all++;
		cout << "\e[40;31;1mТы не победил...\e[32;m    Счёт:"<<win<<"/"<<all <<endl;msleep(300);goto startroll;}
	if(dwao == trio){
	if(odino == trio){
	}}
	else {
		cout << odin << dwa << tri << endl;all++;
		cout << "\e[40;31;1mТы не победил...\e[32;m    Счёт: " <<win<<"/"<<all <<endl;msleep(300);goto startroll;}
	msleep(300);
	goto startroll;}
	if(game==2)goto start;
	
}
	if(wibor == 2){
	int pcwibor;
	int playerwibor;
	int razi = 0;
	int pobed = 0;
	cout << "Эта игра камень-ножницы-бумага\n";
	knb:; 
	system ("clear");
	cout << "(1) Камень     		     Твой счёт:"<< pobed <<"/"<< razi <<"\n(2) Ножницы\n(3) Бумага\n(4) Вернуться назад\n";
	
	cin >> playerwibor;
	if(playerwibor == 4){ system ("clear"); goto start;}
	srand(time(NULL));
    pcwibor = 1 + rand() % 3;
    if(pcwibor == playerwibor){printf("\e[40;36;1mНичья!!!\e[32;m\n");msleep(1600);goto knb;}
    if(pcwibor == 1)
    {
		if(playerwibor == 2){printf("\e[40;31;1mТы проиграл, соперник выбрал камень!!!\e[32;m\n");razi++;}
		if(playerwibor == 3){printf("\e[50;33;1mТы победил, соперник выбрал камень!!!\e[32;m\n");pobed++;razi++;}
		msleep(2000);
	}
	if(pcwibor == 2)
    {
		if(playerwibor == 1){printf( "\e[50;33;1mТы победил, соперник выбрал ножницы!!!\e[32;m\n");pobed++;razi++;}
		if(playerwibor == 3){printf( "\e[40;31;1mТы проиграл, соперник выбрал ножницы!!!\e[32;m\n");razi++;}
		msleep(2000);
	}
    if(pcwibor == 3)
    {
		if(playerwibor == 1){printf( "\e[40;31;1mТы проиграл, соперник выбрал бумагу!!!\e[32;m\n");razi++;}
		if(playerwibor == 2){printf( "\e[50;33;1mТы победил, соперник выбрал бумагу!!!\e[32;m\n");pobed++;razi++;}
		msleep(2000);
	}
	goto knb;
}
	if(wibor == 3){cout<<"\e[50;33;1mСпасибо за использование моей программы \e[32;m" << "\e[40;36;1m:)\e[32;m\n";return 0;}


}




#elif _WIN32
using namespace std;

int main(int argc, char **argv)
{
	int wibor;
	string a, b, c;
	string odin, dwa, tri;
	int odino, dwao, trio;
	cout << "Вас приветствуют мини игры\n";
	
	a = "#####   \n# A #   \n#####   \n";
	b = "#####   \n# B #   \n#####   \n";
	c = "#####   \n# C #   \n#####   \n";
	start:;
	cout << "(1) Крутить рулетку\n(2) Камень ножницы бумага\n(3) Выйти из программы\n";
	cin >> wibor; system ("CLS");
	if(wibor == 1){
		int all=0;
		int win=0;
		int game;
		startroll:;
	cout << "(1) Крутить рулетку\n(2) Вернуться назад\n";
	cin >> game; system("CLS");
	//В рулетке шанс победить~7-15%
	if(game==1){
	srand(time(NULL));
    odino = 1 + rand() % 3;
    dwao = 1 + rand() % 3;
    trio = 1 + rand() % 3;
    
    if(odino==1){odin=a;}
    if(odino==2){odin=b;}
    if(odino==3){odin=c;}
    
    if(dwao==1){dwa=a;}
    if(dwao==2){dwa=b;}
    if(dwao==3){dwa=c;}
    
    if(trio==1){tri=a;}
    if(trio==2){tri=b;}
    if(trio==3){tri=c;}
    
    if(odino == dwao){
	if(dwao == trio){
		cout << odin << dwa << tri << endl;all++;win++;
		cout << "\e[50;33;1mТы победил!!!\e[32;m       Счёт:"<<win<<"/"<<all <<endl;
	}}
	else {
		cout << odin << dwa << tri << endl;all++;
		cout << "\e[40;31;1mТы не победил...\e[32;m    Счёт:"<<win<<"/"<<all <<endl;msleep(300);goto startroll;}
	if(odino == trio){
	if(dwao == trio){
	}}
	else {
		cout << odin << dwa << tri << endl;all++;
		cout << "\e[40;31;1mТы не победил...\e[32;m    Счёт:"<<win<<"/"<<all <<endl;msleep(300);goto startroll;}
	if(dwao == trio){
	if(odino == trio){
	}}
	else {
		cout << odin << dwa << tri << endl;all++;
		cout << "\e[40;31;1mТы не победил...\e[32;m    Счёт: " <<win<<"/"<<all <<endl;msleep(300);goto startroll;}
	msleep(300);
	goto startroll;}
	if(game==2)goto start;
	
}
	if(wibor == 2){
	int pcwibor;
	int playerwibor;
	int razi = 0;
	int pobed = 0;
	cout << "Эта игра камень ножницы бумага\n";
	knb:; 
	system ("CLS");
	cout << "(1) Камень     		     Твой счёт:"<< pobed <<"/"<< razi <<"\n(2) Ножницы\n(3) Бумага\n(4) Вернуться назад\n";
	
	cin >> playerwibor;
	if(playerwibor == 4){ system ("CLS"); goto start;}
	srand(time(NULL));
    pcwibor = 1 + rand() % 3;
    if(pcwibor == playerwibor){printf("\e[40;36;1mНичья!!!\e[32;m\n");msleep(1600);goto knb;}
    if(pcwibor == 1)
    {
		if(playerwibor == 2){printf("\e[40;31;1mТы проиграл, соперник выбрал камень!!!\e[32;m\n");razi++;}
		if(playerwibor == 3){printf("\e[50;33;1mТы победил, соперник выбрал камень!!!\e[32;m\n");pobed++;razi++;}
		msleep(2000);
	}
	if(pcwibor == 2)
    {
		if(playerwibor == 1){printf( "\e[50;33;1mТы победил, соперник выбрал ножницы!!!\e[32;m\n");pobed++;razi++;}
		if(playerwibor == 3){printf( "\e[40;31;1mТы проиграл, соперник выбрал ножницы!!!\e[32;m\n");razi++;}
		msleep(2000);
	}
    if(pcwibor == 3)
    {
		if(playerwibor == 1){printf( "\e[40;31;1mТы проиграл, соперник выбрал бумагу!!!\e[32;m\n");razi++;}
		if(playerwibor == 2){printf( "\e[50;33;1mТы победил, соперник выбрал бумагу!!!\e[32;m\n");pobed++;razi++;}
		msleep(2000);
	}
	goto knb;
}
	if(wibor == 3){cout<<"\e[50;33;1mСпасибо за использование моей программы \e[32;m" << "\e[40;36;1m:)\e[32;m\n";return 0;}


}

#else

#endif
