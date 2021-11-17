using System;
using System.Collections.Generic;
using System.Text;

namespace btn
{
    class b9
    {
        public static void nhapMang(int[] a,int n)
        {
            for (int i = 0; i < n; i++)
            {
                Console.Write("Nhap gt:");
                a[i] = Convert.ToInt32(Console.ReadLine());
            }
            for (int i = 0; i < n; i++)
            {
                Console.Write(a[i]+",");
            }
            Console.WriteLine(" ");
        }
        public static void sxtc(int[] a,int n)
        {
            int tg;
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] > a[j])
                    {
                        tg = a[i];
                        a[i] = a[j];
                        a[j] = tg;
                    }
                }
            }
            Console.WriteLine("3 vi tri thap den cao:");
            Console.WriteLine(a[0] + "," + a[1] + "," + a[2]);
        }
        public static void sxct(int[] a, int n)
        {
            int tg;
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] < a[j])
                    {
                        tg = a[i];
                        a[i] = a[j];
                        a[j] = tg;
                    }
                }
            }
            Console.WriteLine("3 vi tri cao den thap:");
            Console.WriteLine(a[0] + "," + a[1] + "," + a[2]);
        }
    }
}
