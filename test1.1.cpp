#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "输入模式:\n1.安装\n2.卸载(保留配置文件)\n3.彻底卸载\n4.列出已安装的包\n6.检查包是否安装\n7.查看包包含的文件\n";
    int mode;
    cin >> mode;
    string pkg;
    switch (mode) {
        case 1:
            cout << "输入包名（含格式）:";
            cin >> pkg;
            cout << "执行命令:sudo dpkg -i " << pkg << endl;
            break;
        case 2:
            cout << "输入包名（含格式）:";
            cin >> pkg;
            cout << "执行命令:sudo dpkg -r " << pkg << endl;
            break;
        case 3:
            cout << "输入包名（含格式）:";
            cin >> pkg;
            cout << "执行命令:sudo dpkg -P " << pkg << endl;
            break;
        case 4:
            cout << "执行命令:dpkg -l" << endl;
            break;
        case 6:
            cout << "输入包名（含格式）:";
            cin >> pkg;
            cout << "执行命令:dpkg -s " << pkg << endl;
            break;
        case 7:
            cout << "输入包名（含格式）:";
            cin >> pkg;
            cout << "执行命令:dpkg -L " << pkg << endl;
            break;
        default:
            cout << "输入错误" << endl;
            break;
    }
    return 0;
}