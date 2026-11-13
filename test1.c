#include <stdio.h>
#include <stdbool.h>

int main() {
	char nums[] = {'1','2','3','4','5','6','7','8','9'};
	char chrs[] = {'+', '-', '*', '/', '^', '%'};
    char st[32];
    scanf("%s", st);
    // for (int i = 0; i < 32; i++){
    //     printf("%c\n", st[i]);
    // }
    char ch;
    int i = 0;
    ch = st[i];
    bool isch = false;
    bool isnm = false;
    bool issp = false;
    while (ch != '\x3b') {
        // for (short nari = 0; nari <= 9; nari++) {
        //     if (ch == nums[nari]) {
        //         isch = false;
        //         issp = false;
        //         isnm = true;
        //     }
        // }
        // for (short cari = 0; cari <= 6; cari++) {
        //     if (ch == chrs[cari]) {
        //         isnm = false;
        //         issp = false;
        //         isch = true;
        //     }
        // }
        // if (ch == ' ') {
        //     isch = false;
        //     isnm = false;
        //     issp = true;
        // }
        // if (isnm) {
        //     printf("num\n");
        // }
        // if (isch) {
        //     printf("char\n");
        // }
        // if (issp) {
        //     printf("space\n");
        // }
        printf("%x\n", ch);
        i++;
        if (i >= 99) {
            return 1;
        }
        ch = st[i];
    }
    return 0;
}