#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	string a, c;
	int b;
	while(1){
		printf("以下是你的ip:\n");
		system("ipconfig");
		printf("请输入对方ip:");
		cin >> a;
		printf("请输入操作（执行命令/1，关机/2, 重启/3, 发送信息/4）:");
		cin >>b;
		switch(b){
			case 1:{
				printf("请输入命令:");	
				getchar();
				getline(cin, c);
				printf("你确定0/1");
				cin >>b;
				if(b){
					system(("jiyu.exe -ip "+a+" -c \""+c+"\"").c_str());
				}
				break;
			}
			case 2:{
				printf("你确定0/1");
				cin >>b;
				if(b){
					system(("jiyu.exe -ip "+a+" -e s").c_str());
				}
				break;
			}
			case 3:{
				printf("你确定0/1");
				cin >> b;
				if(b){
					system(("jiyu.exe -ip "+a+" -e r").c_str());
				}
				break;
			}
			case 4:{
				printf("请输入话:");
				getchar();	
				getline(cin, c);
				printf("你确定0/1");
				cin >>b;
				if(b){
					system(("jiyu.exe -ip "+a+" -msg \""+c+"\"").c_str());
				}
				break;
			}
		}
	}
	return 0;
}
