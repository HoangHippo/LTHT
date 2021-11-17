using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace btn
{
	class b11
	{
		public static int ln(int[] a, int n)
		{
			int so = 0;
			while (true)
			{
				Random r2 = new Random();
				int num = r2.Next(0,10000);
				for (int i = 0; i < n; i++)
				{
					if (a[0] == 0)
					{
						a[0] = a[1];
						n--;
					}
					a[n] = num;
				}
				n++;
				int tg;
				for (int i = 0; i < n-1; i++)
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

				for (int i = 0; i < n; i++)
				{
					if(a[i]<2021)
                    {
						return a[i];
                    }						
				}
			}
		}
	}
}
