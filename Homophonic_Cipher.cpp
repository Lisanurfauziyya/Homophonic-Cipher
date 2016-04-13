#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,ct="",pt="";
	cout<<"Masukkan plainteks (huruf kecil) : ";
	cin>>a;
	string w[26][6]={
	{"ZA","ZB","ZC","ZD","ZE","a"},
	{"YA","YB","YC","YD","YE","b"},
	{"XA","XB","XC","XD","XE","c"},
	{"WA","WB","WC","WD","WE","d"},
	{"VA","VB","VC","VD","VE","e"},
	{"UA","UB","UC","UD","UE","f"},
	{"TA","TB","TC","TD","TE","g"},
	{"SA","SB","SC","SD","SE","h"},
	{"RA","RB","RC","RD","RE","i"},
	{"QA","QB","QC","QD","QE","j"},
	{"PA","PB","PC","PD","PE","k"},
	{"OA","OB","OC","OD","OE","l"},
	{"NA","NB","NC","ND","NE","m"},
	{"MA","MB","MC","MD","ME","n"},
	{"LA","LB","LC","LD","LE","o"},
	{"KA","KB","KC","KD","KE","p"},
	{"JA","JB","JC","JD","JE","q"},
	{"IA","IB","IC","ID","IE","r"},
	{"HA","HB","HC","HD","HE","s"},
	{"GA","GB","GC","GD","GE","t"},
	{"FA","FB","FC","FD","FE","u"},
	{"EA","EB","EC","ED","EE","v"},
	{"DA","DB","DC","DD","DE","w"},
	{"CA","CB","CC","CD","CE","x"},
	{"BA","BB","BC","BD","BE","y"},
	{"AA","AB","AC","AD","AE","z"},
	};
	srand(time(NULL));
	//encrypt
	for(int t=0;t<a.length();t++){
		int tem=a[t]-'a';
		ct+=w[tem][rand()%5];
	}
	cout<<"Encrypt"<<endl;
	cout<<"Cipherteks : "<<ct<<endl;
	
	//decrypt
	for(int t=0;t<ct.length();t+=2){
		string temp=ct.substr(t,2);
		for(int r=0;r<26;r++){
			for(int e=0;e<5;e++){
				if(temp==w[r][e]){
					pt+=w[r][5];
				}
			}
		}
	}
	cout<<"Decrypt"<<endl;
	cout<<"Plainteks : "<<pt<<endl;
}
