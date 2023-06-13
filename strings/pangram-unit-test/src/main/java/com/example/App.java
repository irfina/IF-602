package com.example;

import javax.xml.crypto.dsig.spec.C14NMethodParameterSpec;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main(String[] args)
    {
        var app = new App();
        if (app.isPangram("Hello"))
            System.out.println("It's a pangram");
        else
            System.out.println("Not a pangram");
    }

    public boolean isPangram(String _str)
    {
        var arrMark = new boolean[26];

        char ch;
        for (int i = 0; i < _str.length(); i++) {
            ch = _str.charAt(i);
            if (ch == ' ')
                continue;

            if (Character.isAlphabetic(ch)) {
                arrMark[((int) ch) - 97] = true;
            }
        }

        for (int i = 0; i < arrMark.length; i++) {
            if (arrMark[i] == false)
                return false;
        }

        return true;
    }
}
