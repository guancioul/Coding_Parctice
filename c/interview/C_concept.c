/*
    C語言觀念
    1. volitile
        https://anal02.pixnet.net/blog/post/117485340-%5Bc%5D-volatile-%E7%9A%84%E7%94%A8%E6%B3%95%E5%92%8C%E7%94%A8%E6%84%8F
        OS會把記憶體的變數加載到CPU暫存器裡面
        有時候編譯器為了優化，會去讀取CPU暫存器裡面的數值
        如果記憶體的值變動了但是CPU的值沒有變動
        那就會產生問題
        加上volititle就是叫編譯器只要去找記憶體的值
        不要去館CPU暫存器的值
    2. static function, static variable
        https://kengebt.pixnet.net/blog/post/42521318
        static變數可以分為兩塊
        第一個是區域變數
        如果區域變數設static，那就只有這個區域可以讀的到這個資料
        第二個是全域變數
        如果全域變數設定static，那除了這個檔案之外的檔案都不能夠讀取這個變數

        static function
        跟上面的全域變數一樣
         
    3. 講述global、static和local variable差異
    4. union
    5. macro/i++/++i
    6. private、public、protect
    7. instance及static
    8. static的特性
    9. linklist跟array的差異
    10. 甚麼是stack
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

}