using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace btn
{
    class b10
    {
        public static int nn(int []a,int n)
        {
			while (true)
			{
				Random r2 = new Random();
				int num = r2.Next();
				for (int i = 0; i < n; i++)
				{
					if (a[0] == 0)
					{
						a[0] = a[1];
						n--;
					}
					a[n] = num;
				}
				n = n + 1;
								
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
				
				for (int i = 0; i < n; i++)
				{
					if(a[i]>2021);
                    {
						return a[i];
                    }					
				}
			}
		}



    }
}
