//Program Layanan Menu Digital

#include<iostream>
using namespace std;

int main()
{
    int pesanan, pri, jlh;
    int total = 0;
    char mad, jwb;
    
    cout<<"====================================================";
    cout<<"============================\n";
    cout<<"\t\t\tSelamat datang di layanan pesan digital\n";
    cout<<"\t\t\t\t(Kedai Uncle Muthu)\n";
    cout<<"====================================================";
    cout<<"============================\n";
    cout<<"Silahkan melihat menu pada tabel di bawah!\n";
    cout<<"Menu : \n";
    cout<<"----|-------------------|---------------|\n";
    cout<<" No.|  MAKANAN/MINUMAN\t|    HARGA\t|\n";
    cout<<"----|-------------------|---------------|\n";
    cout<<" 1. |\tNasi Gurih\t|   Rp12.000\t|\n";
    cout<<" 2. |\tNasi Lemak\t|   Rp12.000\t|\n";
    cout<<" 3. |\tNasi Goreng\t|   Rp12.000\t|\n";
    cout<<" 4. |\tAyam Goreng\t|   Rp6.000\t|\n";
    cout<<" 5. |\tTahu Goreng\t|   Rp2.000\t|\n";
    cout<<" 6. |\tTempe Goreng\t|   Rp2.000\t|\n";
    cout<<" 7. |\tSate Kulit\t|   Rp3.000\t|\n";
    cout<<" 8. |\tNasi\t\t|   Rp4.000\t|\n";
    cout<<" 9. |\tEs Teh\t\t|   Rp3.000\t|\n";
    cout<<" 10.|\tEs Jeruk\t|   Rp3.000\t|\n";
    cout<<"----|-------------------|---------------|\n";
    
    cout<<"Apakah ada yang ingin dipesan? (Y/N)\n";
    cin>>jwb;
    if(jwb == 'Y')
    {
        do
        {
            cout<<"\n";
            cout<<"Menu yang ingin dipesan : ";
            cin>>pesanan;
            switch(pesanan)
            {
                case 1 :
                    cout<<"Pesanan Anda adalah nasi gurih\n";
                    pri=12000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 2 :
                    cout<<"Pesanan Anda adalah nasi lemak\n";
                    pri=12000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 3 :
                    cout<<"Pesanan Anda adalah nasi goreng\n";
                    pri=12000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 4 :
                    cout<<"Pesanan Anda adalah ayam goreng\n";
                    pri=6000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 5 :
                    cout<<"Pesanan Anda adalah tahu goreng\n";
                    pri=2000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 6 :
                    cout<<"Pesanan Anda adalah tempe goreng\n";
                    pri=2000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 7 :
                    cout<<"Pesanan Anda adalah sate kulit\n";
                    pri=3000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 8 :
                    cout<<"Pesanan Anda adalah nasi\n";
                    pri=4000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 9 :
                    cout<<"Pesanan Anda adalah es teh\n";
                    pri=3000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                case 10 :
                    cout<<"Pesanan Anda adalah es jeruk\n";
                    pri=3000;
                    cout<<"ingin pesan berapa? ";
                    cin>>jlh;
                    total=total+(pri*jlh);
                    cout<<"harga yang harus dibayarkan adalah Rp"<<pri*jlh<<"\n";
                    cout<<"Apakah ada pesanan lain? (Y/N)";
                    cin>>mad;
                    break;
                default :
                    cout<<"Mohon masukkan menu yang sesuai";
                    cin>>mad;
            }
        }    
        while(mad/='Y');
        cout<<"\n";
        cout<<"Total harga anda adalah: Rp"<<total<<"\n";
        cout<<"Terima kasih atas kunjungan Anda!\n";
    }
    else
    {   
        cout<<"\n";
        cout<<"Terima Kasih sudah berkunjung!\n";
    }
    
    return 0;
}
