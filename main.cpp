#include <windows.h>

int main(){
    WinExec("javaw --add-opens=java.base/java.lang=ALL-UNNAMED --add-opens=java.desktop/javax.swing=ALL-UNNAMED -noverify -javaagent:\"burp-loader-x-Ai.jar\" -Xmx2048m -jar \"burpsuite_pro.jar\"", SW_SHOWNORMAL);
    return 0;
}
