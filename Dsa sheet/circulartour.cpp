 int tour(petrolPump p[],int n)
    {
       //Your code here
       int start=0,fuelshort=0,fueltank=0;
       for(int i=0;i<n;i++)
       {
           fueltank+=p[i].petrol-p[i].distance;
           if(fueltank<0)
           {
               start=i+1;
               fuelshort+=fueltank;   //yha khel hai
               fueltank=0;
           }
       }
       return (fuelshort+fueltank>=0)?start:-1;
    }