////
//// Created by dell on 2020/1/17.
////
//
//#include <stdio.h>
//#include <string.h>
//
//void main() {
//    char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//    char str2[] = "Hello2";
//
//    printf("打印字符串1-----%s\n", str1);
//    printf("字符串1的长度为%d\n", strlen(str1));
//    printf("打印字符串2-----%s\n", str2);
//    printf("字符串2的长度为%d\n", strlen(str2));
//    printf("字符串1和字符串2比较结果为%d\n", strcmp(str1, str2));
//    if (strcmp(str1, str2) < 0) {
//        printf("字符串2比字符串1长\n");
//    } else if (strcmp(str1, str2) == 0) {
//        printf("字符串1和字符串2一样长\n");
//    } else {
//        printf("字符串1比字符串2长\n");
//    }
//    strcat(str1, str2);
//    printf("合并字符串1和字符串2后字符串1为-----%s\n", str1);
//    printf("合并字符串1和字符串2后字符串2为-----%s\n", str2);
//    strcpy(str2, str1);
//    printf("复制字符串1到字符串2的结果为-----%s\n", str2);
//    printf("字符串2的长度为%d\n", strlen(str2));
//    printf("字符串2中ll的位置%d", strchr(str2, "l"));
//    printf("字符串2中ll的位置%d", strstr(str2, "l"));
//}
//
