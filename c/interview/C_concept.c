/*
    C語言觀念
    1. volatile
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
        其他程式是沒有辦法取用static的function
    3. 講述global、static和local variable差異
        上面那題有提到
    4. union
        struct是在每一個變數都設置不同的記憶體，但是union是所有的變數都共用一段記憶體
    5. macro/i++/++i
        macro是巨集，在C裡面主要就是define的功能，但是如果使用不當的話就會出現問題
        https://openhome.cc/Gossip/CGossip/Macro.html
    6. private、public、protected
        考C的話應該是不會考
        private是外部不能取用，繼承之後也不能取用
        protected是外部不能取用，但是繼承的class也可以取用
        public是大家都可以取得變數內容
    7. instance及static
        改變一個狀態的方式就稱為instance
    8. static的特性
        前面有提到了
    9. linklist跟array的差異
        最主要的差別是array的記憶體會是連著給
        但是Linkedlist的不是
        這樣array就會有幾個優點
        1. 用index就可以做查詢，時間只需要O(1)
        2. 比linkedlist節省空間，因為Linkedlist需要額外的記憶體來指到下一個地方
        缺點
        1. 並沒有辦法像linked list可以新增和刪除元素的資料結構特性
        2. 如果資料數量改變的話，要調整array的大小，需要O(N)的時間再搬動東西

        Linkedlist就跟array相反
    10. 甚麼是stack
        
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

}