#pragma once
#include <cstring>
#include <iostream>

class MyString
{
    char* m_pStr;

public:

    // Конструкторы
    MyString();  // Конструктор по умолчанию, инициализирует m_pStr как nullptr
    MyString(const char* str);  // Конструктор, принимающий C-строку
    MyString(const MyString& oth);  // Конструктор копирования
    MyString(MyString&& oth) noexcept;  // Конструктор перемещения

    // Деструктор
    ~MyString();  // Освобождает память, занятую m_pStr

    // Геттер строки
    const char* GetString() const;  // Возвращает указатель на строку

    // Методы установки новой строки
    void SetNewString(const char* str);  // Устанавливает новую строку из C-строки
    void SetNewString(const MyString& oth);  // Устанавливает новую строку из другого объекта MyString

    // Операторы присваивания
    MyString& operator=(const MyString& oth);  // Оператор присваивания копированием
    MyString& operator=(const char* oth);  // Оператор присваивания C-строкой
    MyString& operator=(MyString&& oth) noexcept;  // Оператор присваивания перемещением

    // Операторы сложения
    MyString operator+(const MyString& oth);  // Оператор сложения с другим объектом MyString
    MyString operator+(const char* str);  // Оператор сложения с C-строкой

    // Операторы сложения с присваиванием
    MyString& operator+=(const MyString& oth);  // Оператор += с другим объектом MyString
    MyString& operator+=(const char* str);  // Оператор += с C-строкой

    // Оператор вывода в поток
    friend std::ostream& operator<<(std::ostream& examp, const MyString& str);  // Оператор вывода в поток

    // Метод обмена строками
    void StrSwap(MyString& oth);  // Меняет местами строки текущего объекта и другого объекта MyString

    // Операторы сравнения
    bool operator==(const MyString& oth);  // Оператор сравнения с другим объектом MyString
    bool operator==(const char* oth);  // Оператор сравнения с C-строкой

};