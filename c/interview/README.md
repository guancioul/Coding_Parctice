# 群聯面試準備
## 留言整理 
1. goodjob
    1. 兩個陣列的排序(已經排序好的兩個陣列跟沒有排序的兩個陣列)*
    2. struct大小*
    3. bitwise operation基本操作*
    4. linked list反轉*
    5. pointer輸出*
    6. 排序法會問時間複雜度*
    7. 群聯三題*
    8. volitile用途*
    9. static function*
    10. linkedlist head，不知道多長，找到前半段的最大值*
    11. binary search*
    12. invise一個bit*
    13. 給定一個排序好的矩陣，從[1,1,1,...,0,0]用最少的資源找出最後一個1*
    14. pointer指標傳入function(function pointer)*
    15. 回傳int中有幾個bit為1*
    16. 給一個int，轉成16進為字串
    17. sorted int array，回傳一個value的區間*
    18. OS觀念
        1. mutex, semaphor差異*
        2. mutex critical section 中只能有一個 thread 進入；semaphore 可以有很多個，在 initial semaphore 時可以設定*
        3. 請我解釋一下 quick sort。我就盡量講，worst : O(n^2), average : O(nlogn)，然後敘述一下遞迴的時做法*
    19. array指標操作(int a[5]={1,2,3,4,5}; 問印*(a++), *(++a) 的經典考題) *
    20. 寫一程式輸入n，計算距離現在n天後是幾年幾月幾號*
    21. bitwise操作(set bit、clear bit 的經典考題)*
    22. struct的size、memory alignment問題*
    23. 一個non-empty linked-list找middle node的值，如果有兩個middle node，return second middle node.*
    24. 實作 Binary search，找到回true，反之回false*
    25. 講述global、static和local variable差異*
    26. 給一串記憶體位置與對參數，考pointer讀取參數填充給答案，並回答是Big-Endian/Little-Endian*
    27. 給一串矩陣，先Sort從小到大，並Search某個參數在第幾個位置。(binary search)*
2. ptt
    1. 指標*
    2. set/clear bit*
    3. struct*
    4. linked list*
    5. binary search*
    6. 寫function return這個整數是不是2的次方 (除了常見解法，還可以了解一下log解法)*
    7. little/big endian 變數值怎麼存放*
    8. 寫function 把某個數的第x個bit改成1或0 (改成1直接用or、改成0用mask 之後and)*
    9. 什麼是nand flash，什麼是ufs
    10. 0~500個數字每次隨機，取一個數字出來，但下次在抽出時不可以出現已經抽過的數字，問你如何實現*
    11. 8-bit size的值求最高位元是在第幾個bit*
    12. static的特性，linklist跟array的差異，甚麼是stack，都回答完後，就出四題白板題如下*
    13. 印出*
        ```
        *
        **
        ***
        ****
        *****
        ```
    14. int a = 0xfafc 求第九個bit值是多少*
    15. 11,12,23,35,58,....N 用一個函數 輸入值是位置的值n，要找出相對應的值，就是費式數列*
    16. 假如有一個很大的array要你search 你會怎麼做
        我一開始回答用binary search 主管說這是未排序的
        後來我就回答暴力解，後來回家查了一下資料可以用binary tree search
        或是hash function
        又問一個array 如果我隨機抽掉一個位置的值，我不知道我抽掉的是哪個位置
        請問要怎麼知道這個值是多少
        我回答把第一個array數字累加扣掉抽掉的array的數字累加
    17. 問bitwise的問題(set成1、clear成0)*
    18. 最大公因數(遞迴寫法)*
    19. 考題有bit operation*
    20. union配置*
    21. linked-list 找出前半段的最大值*
    22. macro/i++/++i綜合題*
    23. function記憶體配置*
    24. sorted array*
    25. private等前贅字定義*
    26. instance及static差異及用法*
    27. 寫出費氏數列*
    28. multi-thread跟deadlock問題*
## 題目整理
1. 群聯三題
2. sorted array
    1. 兩個sorted array排序
3. struct
    1. struct大小
    2. memory alignment
4. bitwise
    1. bitwise基本操作
    2. 回傳int中有幾個bit為1
    3. bitwise操作(set bit、clear bit 的經典考題)
    4. 寫function 把某個數的第x個bit改成1或0 (改成1直接用or、改成0用mask 之後and)
    5. 8-bit size的值求最高位元是在第幾個bit
    6. int a = 0xfafc 求第九個bit值是多少
    7. invise一個bit
5. linked list
    1. linked list反轉
    2. linkedlist head，不知道多長，找到前半段的最大值
    3. 一個non-empty linked-list找middle node的值，如果有兩個middle node，return second middle node.
6. binary search
    1. 實作 Binary search，找到回true，反之回false
    2. 給一串矩陣，先Sort從小到大，並Search某個參數在第幾個位置。(binary search)
    3. sorted int array，回傳一個value的區間
    4. 給定一個排序好的矩陣，從[1,1,1,...,0,0]用最少的資源找出最後一個1
7. pointer
    1. pointer輸出
    2. pointer指標傳入function(function pointer)
    3. array指標操作(int a[5]={1,2,3,4,5}; 問印*(a++), *(++a) 的經典考題)
    4. 給一串記憶體位置與對參數，考pointer讀取參數填充給答案，並回答是Big-Endian/Little-Endian
8. C語言觀念
    1. volitile
    2. static function
    3. 講述global、static和local variable差異
    4. union
    5. macro/i++/++i
    6. private、public、protect
    7. instance及static
    8. static的特性
    9. linklist跟array的差異
    10. 甚麼是stack
9. OS觀念
    1. mutex, semaphor差異
    2. mutex critical section 中只能有一個 thread 進入；semaphore 可以有很多個，在 initial semaphore 時可以設定
    3. multi-thread跟deadlock問題
    4. function記憶體配置
    5. Page / Block / Read / Write 等等的概念
10. 應用題
    1. 排序法 時間複雜度
    2. 請我解釋一下 quick sort。我就盡量講，worst : O(n^2), average : O(nlogn)，然後敘述一下遞迴的時做法
    3. 寫一程式輸入n，計算距離現在n天後是幾年幾月幾號
    4. 寫function return這個整數是不是2的次方 (除了常見解法，還可以了解一下log解法)
    5. 0~500個數字每次隨機，取一個數字出來，但下次在抽出時不可以出現已經抽過的數字，問你如何實現
    6. 印出
       ```
       *
       **
       ***
       ****
       *****
       ```
    7. 11,12,23,35,58,....N 用一個函數 輸入值是位置的值n，要找出相對應的值，就是費式數列
    8. 最大公因數(遞迴寫法)
11. 其他
    1. nand flash
    2. ufs
    
| 題目 | 檔案 |
| ---- | ---- |
| 群聯三題 | phison.c |
| sorted array | |
| struct  | |
