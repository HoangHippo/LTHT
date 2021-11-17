using System;

namespace btn
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[100];
            int[] b_ten = new int[1000];
            int[] b_ele = new int[1000];
            int n;
            Console.WriteLine("Nhap n:");
            n = Convert.ToInt32(Console.ReadLine());
            b9.nhapMang(a,n);
            b9.sxct(a, n);
            b9.sxtc(a, n);
            Console.WriteLine(b10.nn(b_ten, 1));
            Console.WriteLine(b11.ln(b_ele, 1));
            b12.queue();
            b13.stack();

        }
    }
}
