﻿// Задание 16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cstdlib>

int main()
{
    setlocale (LC_ALL, "Russian");
    //задание 1.
   /* std::cout << "Задание 1. Среднее арифметическое\n";
    const int size = 10;
    int sum = 0;
    int counter=0;
    int arr[size]{ 5,8,26,43,58,90,41,2,7,3 };
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ", ";
        sum += arr[i];
        }
    for (int i = 0; i <size; i++) {
        if (arr[i] < sum/10)
           
            std::cout <<"\nЭлементы, меньшие чем ср.арифм: " << arr[i] << '\n';
    }
        
    
    std::cout << "\b\b.\n";
    std::cout << "Среднее арифметическое элементов массива равно: " << sum / 10 << '\n';*/
   //задание 2.
    /*int arr1[5][5]{
        {4,6,8,2,1},
        {7,9,4,3,1},
        {1,2,3,5,8},
        {7,9,5,7,3},
        {6,4,3,2,0}
    };
    int arr2[5][5]{
        {1,1,8,3,2},
        {2,9,7,1,3},
        {4,4,1,2,0},
        {7,5,4,9,2},
        {5,3,6,2,4}
    };
    std::cout << "Сумма эл.ряда 1: " << arr1[0][0] + arr2[0][0] << '\t' << arr1[0][1] + arr2[0][1] << '\t' << arr1[0][2] + arr2[0][2] << '\t' << arr1[0][3] + arr2[0][3] << '\t' << arr1[0][4] + arr2[0][4] << '\t';
    std::cout << "Сумма эл.ряда 2: " << arr1[1][0] + arr2[1][0] << '\t' << arr1[1][1] + arr2[1][1] << '\t' << arr1[1][2] + arr2[1][2] << '\t' << arr1[1][3] + arr2[1][3] << '\t' << arr1[1][4] + arr2[1][4] << '\t';
    std::cout << "Сумма эл.ряда 3: " << arr1[2][0] + arr2[2][0] << '\t' << arr1[2][1] + arr2[2][1] << '\t' << arr1[2][2] + arr2[2][2] << '\t' << arr1[2][3] + arr2[2][3] << '\t' << arr1[2][4] + arr2[2][4] << '\t';
    std::cout << "Сумма эл.ряда 4: " << arr1[3][0] + arr2[3][0] << '\t' << arr1[3][1] + arr2[3][1] << '\t' << arr1[3][2] + arr2[3][2] << '\t' << arr1[3][3] + arr2[3][3] << '\t' << arr1[3][4] + arr2[3][4] << '\t';
    std::cout << "Сумма эл.ряда 5: " << arr1[4][0] + arr2[4][0] << '\t' << arr1[4][1] + arr2[4][1] << '\t' << arr1[4][2] + arr2[4][2] << '\t' << arr1[4][3] + arr2[4][3] << '\t' << arr1[4][4] + arr2[4][4] << '\t';*/
    
    //Задание 3. Ввод числа и массив
    int n = 555555;
    int m;
    int arr[6]{5,5,5,5,5,5};
    std::cout << "Введите шестизначное число ->\n";
    std::cin >> m;
    for (int i = 0; i < 6; i++) {
        if (m == n)
            std::cout << arr[i];
        else
            std::cout << "ERROR. Try again later\n";
    }





    return 0;
}


