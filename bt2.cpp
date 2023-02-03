#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <string>
#include <conio.h>
#include <ctime>
using namespace std;
int dem = 0;
class HangHoa
{
public:
    int id;

    string tenhanghoa;
    string tennhanhieu;

    int SKU;

    int ngay_nhap;
    int thang_nhap;
    int ngay_xuat;
    int thang_xuat;
    int soluonghangton;
    int don_gia;
    float tong_tien;

    int tongtienxuat;
    int slxuat;

    HangHoa()
    {
        id = 0;

        tenhanghoa = "trong";
        tennhanhieu = "trong";

        SKU = 0;
        ngay_nhap = 0;
        thang_nhap = 0;
        thang_xuat = 0;
        ngay_xuat = 0;
        soluonghangton = 0;
        tong_tien = 0;
        tongtienxuat = 0;
        slxuat = 0;
    }
    void nhap()
    {

        cin.ignore();
        cout << "NHAP TEN HANG HOA: ";
        getline(cin, tenhanghoa);
        fflush(stdin);
        cout << "NHAP TEN NHAN HIEU: ";
        getline(cin, tennhanhieu);

        cout << "NHAP NGAY NHAP: ";
        cin >> ngay_nhap;

        cout << "NHAP THANG NHAP: ";
        cin >> thang_nhap;

        cout << "NHAP SKU: ";
        cin >> SKU;

        cout << "NHAP SO LUONG HANG TON: ";
        cin >> soluonghangton;

        cout << "NHAP DON GIA: ";
        cin >> don_gia;
    }
    void xuat()
    {
        tong_tien = (float)(don_gia * soluonghangton);
        cout << ".................................\n";
        cout << "ID: " << right << setw(19) << id;
        cout << "\n";
        cout << "Ten Hang hoa:" << right << setw(10) << tenhanghoa;
        cout << "\n";
        cout << "Nhan hieu: " << right << setw(12) << tennhanhieu;
        cout << "\n";
        cout << "Thoi gian nhap: " << right << setw(7) << ngay_nhap << "/" << thang_nhap;
        cout << "\n";
        cout << "SKU: " << right << setw(18) << SKU;
        cout << "\n";
        cout << "So luong hang ton :" << right << setw(4) << soluonghangton;
        cout << "\n";
        cout << "Don gia: " << right << setw(19) << don_gia;
        cout << "\n";
        cout << ".................................\n";
        cout << "Gia tri lo hang: " << right << setw(11) << tong_tien << endl;
        cout << ".................................\n";
        std::cout << endl;
    }
    void nhapid(int r)
    {
        this->id = r;
    }
    void reset()
    {

        tenhanghoa = "trong";
        tennhanhieu = "trong";

        SKU = 0;
        ngay_nhap = 0;
        thang_nhap = 0;
        ngay_xuat = 0;
        thang_xuat = 0;
        soluonghangton = 0;
        tong_tien = 0;
        don_gia = 0;
        tongtienxuat = 0;
        slxuat = 0;
    }
};
class KhachHang
{
public:
    time_t now = time(0);
    char* dt = ctime(&now);
    string tenkh;
    KhachHang()
    {
        tenkh = "";
    }
};
void SET_COLOR(int color)
{
    WORD wColor;


    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF10) + (color & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

int main()
{
    //=========BIEN DIEU KHIEN======================
    int thoatmenu = 0;
    int chonmenu;
    int thoatchonmenu = 0;
    int find = 0;
    //======================================================
    int soloaihangcannhap = 0;
    int biendemsohang = 0;
    int biendemohohangtrong = 0;
    int fakeid;
    int kiemtra = 0;
    int soluong;

    string faketen;

    int fakengay, fakethang;

    int biendem = 0;

    int fakeslxuat = 0;
    int tt;
    int ch;
    //======================================================

    int i = 0;
    while (i < 3)
    {
        string username;
        string password;
        cout << "Nhap Tai khoan: ";
        cin >> username;
        cout << "Nhap Mat khau: ";
        cin >> password;
        if (username == "2")
        {
            if (password == "2")
            {
                cout << "\nACCESS COMPLITED!!!!" << endl;
                int m;
                cout << "TAO O CHUA MAT HANG: ";
                cin >> m;

                HangHoa h[m];
                KhachHang kh;

                for (int i = 0; i < m; i++)
                {
                    h[i].nhapid(i + 1);
                }

                while (1)
                {
                    cout << "\n\t\t\t\t\t    ======================================\n";

                    cout << "\n\t\t\t\t\t       ITEM WAREHOUSE MANGAMENT PROJECT\n";

                    cout << "\n\t\t\t\t\t    ======================================\n";

                    cout << "\n\t\t\t\t\t  ~* * * * * * * * * * * * * * * * * * * * *~\n";

                    cout << "\n\t\t\t\t-_________________________MENU_________________________\n";

                    cout << "\t\t\t\t|  1. Nhap thong tin hang hoa.                       |\n";

                    cout << "\t\t\t\t|  2. Cap nhat thong tin hang hoa theo ID.           |\n";

                    cout << "\t\t\t\t|  3. Tim hang hoa theo ten                          |\n";

                    cout << "\t\t\t\t|  4. Tim hang hoa theo ngay nhap                    |\n";

                    cout << "\t\t\t\t|  5. Xoa hang hoa theo ID.                          |\n";

                    cout << "\t\t\t\t|  6. Xoa hang hoa theo ten.                         |\n";

                    cout << "\t\t\t\t|  7. Hien thi danh sach hang dang co trong kho      |\n";

                    cout << "\t\t\t\t|  8. Xuat hang dang co trong kho va in bien lai     |\n";

                    cout << "\t\t\t\t|  0. Thoat                                          |\n";

                    cout << "\t\t\t\t_____________________________________________________\n\n\n";
                    cout << "NHAP LUA CHON(0-8): ";
                    thoatchonmenu = 0;
                    while (thoatchonmenu == 0)
                    {
                        cin >> chonmenu;
                        if (chonmenu >= 0 && chonmenu <= 8)
                        {
                            thoatchonmenu = 1;
                        }
                        else
                        {
                            cout << "NHAP SAI. NHAP LAI: ";
                        }
                        switch (chonmenu)
                        {
                        case 1:
                            biendemsohang = 0;
                            biendemohohangtrong = 0;
                            for (int i = 0; i < m; i++)
                            {
                                if (h[i].tenhanghoa == "trong")
                                {
                                    biendemohohangtrong++;
                                }
                            }
                            cout << "NHAP SO LOAI HANG: ";
                            cin >> soloaihangcannhap;
                            if (soloaihangcannhap <= biendemohohangtrong)
                            {
                                for (int i = 0; i < m; i++)
                                {
                                    if (h[i].tenhanghoa == "trong")
                                    {
                                        h[i].nhap();
                                        biendemsohang++;
                                    }
                                    if (biendemsohang == soloaihangcannhap)
                                    {
                                        break;
                                    }
                                }
                            }
                            else
                            {
                                cout << "KO DU O NHO DE LUU" << '\n';
                            }
                            if (biendemsohang != 0)
                            {
                                cout << "NHAP THANH CONG." << '\n';
                            }
                            break;
                        case 2:
                            int c;
                            cout << "\nNhan 1 de tiep tuc chuong trinh" << endl;
                            cout << "\nNhan 2 de thoat" << endl;
                            cout << "Chon: ";
                            cin >> ch;
                            if (ch == 1)
                            {
                                cout << "\nNhap ten hang ban muon chinh sua: ";
                                cin >> faketen;
                                for (int i = 0; i < m; i++)
                                {
                                    if (faketen == h[i].tenhanghoa)
                                    {
                                        cout << "\nBan muon chinh sua thong tin gi?" << endl;
                                        cout << "\nNhan 1 de chinh sua ten hang" << endl;
                                        cout << "\nNhan 2 de chinh sua ten nhan hieu" << endl;
                                        cout << "\nNhan 3 de chinh SKU" << endl;
                                        cout << "\nNhan 4 de chinh sua thoi gian xuat" << endl;
                                        cout << "\nNhan 5 de chinh don gia" << endl;
                                        cout << "\nNhan 6 de chinh toan bo" << endl;
                                        cout << "\nChon: ";
                                        cin >> c;
                                        if (c == 1)
                                        {
                                            cin.ignore();
                                            cout << "\nNhap ten nhan hieu moi: ";
                                            getline(cin, h[i].tenhanghoa);
                                            fflush(stdin);
                                        }
                                        if (c == 2)
                                        {
                                            cout << "\nNhap ten nhan hieu moi: ";
                                            cin >> h[i].tennhanhieu;
                                        }
                                        if (c == 3)
                                        {
                                            cout << "\nNhap SKU moi: ";
                                            cin >> h[i].SKU;
                                        }
                                        if (c == 4)
                                        {
                                            cout << "\nNhap ngay nhap: ";
                                            cin >> h[i].ngay_nhap;
                                            cout << "\nNhap thang nhap: ";
                                            cin >> h[i].thang_nhap;
                                        }
                                        if (c == 5)
                                        {
                                            cout << "\nNhap don gia moi: ";
                                            cin >> h[i].don_gia;
                                        }
                                        if (c == 6)
                                        {
                                            cout << "\nNhap ten hang hoa moi: ";
                                            cin >> h[i].tenhanghoa;
                                            cout << "\nNhap ten nhan hieu moi: ";
                                            cin >> h[i].tennhanhieu;
                                            cout << "\nNhap SKU moi: ";
                                            cin >> h[i].SKU;
                                            cout << "\nNhap ngay nhap: ";
                                            cin >> h[i].ngay_nhap;
                                            cout << "\nNhap thang nhap: ";
                                            cin >> h[i].thang_nhap;
                                            cout << "\nNhap don gia moi: ";
                                            cin >> h[i].don_gia;
                                        }
                                        cout << "\nChinh sua thong tin thanh cong" << endl;
                                    }
                                    else
                                    {
                                        cout << "\nThong tin hang hoa khong hop le!!!" << endl;
                                    }
                                }
                            }
                            else if (c == 2)
                            {
                                cout << "\nThoat tinh nang" << endl;
                                cout << "Press any key to continue" << endl;
                                getch();
                            }
                            break;
                        case 3:
                            cout << "\nNhap 1 de tiep tuc chuong trinh" << endl;
                            cout << "\nNhan 2 de thoat" << endl;
                            cin >> ch;
                            if (ch == 1) {
                                cout << "NHAP TEN HANG HOA CAN TIM: ";
                                cin.ignore();
                                getline(cin, faketen);
                                fflush(stdin);
                                kiemtra = 0;

                                for (int i = 0; i < m; i++)
                                {
                                    if (h[i].tenhanghoa == faketen)
                                    {
                                        h[i].xuat();
                                        kiemtra = 1;
                                        break;
                                    }
                                }
                                if (kiemtra == 0)
                                {
                                    cout << "KO CO LOAI HANG NAY." << '\n';
                                }
                            }
                            else if (c == 2)
                            {
                                cout << "\nThoat tinh nang" << endl;
                                cout << "Press any key to continue" << endl;
                                getch();
                            }

                            break;
                        case 4:
                            biendem = 0;
                            cout << "\nNhap 1 de tiep tuc chuong trinh" << endl;
                            cout << "\nNhap 2 de thoat" << endl;
                            cout << "\nChon: ";
                            cin >> ch;
                            if (ch == 1) {
                                cout << "NHAP NGAY: ";
                                cin >> fakengay;
                                cout << "NHAP THANG: ";
                                cin >> fakethang;

                                for (int i = 0; i < m; i++)
                                {
                                    if (h[i].ngay_nhap == fakengay && h[i].thang_nhap == fakethang)
                                    {
                                        h[i].xuat();
                                        biendem++;
                                    }
                                }
                                if (biendem == 0)
                                {
                                    cout << " TRONG NGAY NAY KO CO NHAP HANG." << '\n';
                                }
                                else
                                {
                                    cout << "NGAY NAY CO " << biendem << " LOAI HANG DC NHAP." << '\n';
                                }
                            }
                            else if (ch == 2)
                            {

                                cout << "\nThoat tinh nang" << endl;
                                cout << "Press any key to continue" << endl;
                                getch();
                            }
                            break;
                        case 5:
                            find = 0;
                            cout << "NHAP ID HANG BAN MUON XOA: ";
                            cin >> fakeid;
                            for (int i = 0; i < m; i++)
                                if (h[i].id == fakeid)
                                {
                                    cout << "\nDa xoa Hang hoa co ID: " << h[i].id;
                                    find = 1;
                                    h[i].reset();

                                    break;
                                }
                            if (find == 0)
                            {
                                cout << "KHONG TON TAI HANG HOA CO ID NAY" << endl;
                                return 0;
                            }
                            break;
                        case 6:
                            find = 0;
                            cout << "NHAP TEN HANG HOA CAN TIM: ";
                            cin >> faketen;
                            for (int i = 0; i < m; i++)
                                if (h[i].tenhanghoa == faketen)
                                {
                                    cout << "\nDa xoa Hang hoa co ten: " << h[i].tenhanghoa;
                                    find = 1;
                                    h[i].reset();

                                    break;
                                }
                            if (find == 0)
                            {
                                cout << "KHONG TON TAI HANG HOA CO TEN NAY" << endl;
                            }
                            break;
                        case 7:
                            find = 0;
                            cout << "\n\t\tTHONG TIN HANG HIEN CO" << endl;
                            for (int i = 0; i < m; i++)
                            {
                                if (h[i].tenhanghoa != "trong")
                                {
                                    h[i].xuat();
                                    find++;
                                }
                            }
                            if (find == 0)
                            {
                                cout << "\n\t\tTHONG TIN NAY KHONG CHINH XAC, HOAC TRONG KHO KHONG CO LO HANG NAY" << '\n';
                            }
                            break;
                        case 8:
                            tt = 0;
                            fakeslxuat = 0;
                            biendem = 0;
                            cin.ignore();
                            cout << "NHAP TEN HANG HOA: ";
                            getline(cin, faketen);
                            fflush(stdin);
                            for (int i = 0; i < m; i++)
                            {
                                if (h[i].tenhanghoa == faketen)
                                {
                                    tt = i;
                                    h[i].xuat();
                                    biendem++;
                                }
                            }
                            if (biendem == 0)
                            {
                                cout << "KO CO DON HANG NAY." << '\n';
                            }
                            if (biendem == 1)
                            {
                                cout << "NHAP SO LUONG HANG XUAT: ";
                                cin >> fakeslxuat;
                                if (fakeslxuat > h[tt].soluonghangton)
                                {
                                    cout << "KO DU HANG DE XUAT." << '\n';
                                }
                                else
                                {
                                    cout << "NHAP NGAY XUAT: ";
                                    cin >> fakengay;
                                    cout << "NHAP THANG XUAT: ";
                                    cin >> fakethang;
                                    cout << "NHAP TEN KHACH HANG: ";
                                    cin.ignore();
                                    getline(cin, kh.tenkh);
                                    fflush(stdin);
                                    cout << "\n\t\t\t ------------------------------------------------" << endl;
                                    cout << "\t\t\t|               BIEN LAI XUAT HANG                |" << endl;
                                    cout << "\t\t\t ------------------------------------------------" << endl;
                                    cout << endl;
                                    cout << "\t\t\t  Ten khach hang: " << kh.tenkh << endl;
                                    cout << "\t\t\t  Tel  : 0927018176            Fax   : 013-363-4357" << endl;
                                    cout << "\t\t\t  Ngay xuat: " << fakengay << "/" << fakethang << endl;
                                    cout << endl;
                                    cout << "\n\t\t\t ---------------------------------------------------" << endl;
                                    cout << "\t\t\t| Stt         Ten hang hoa       Ten nhan hieu     So luong hang xuat       Don gia |" << endl;
                                    cout << "\t\t\t ---------------------------------------------------" << endl;
                                    cout << "\t\t\t  " << tt << "               " << h[tt].tenhanghoa << "                 " << h[tt].tennhanhieu << "                    " << fakeslxuat << "                 " << h[tt].don_gia << "       " << endl;
                                    cout << "\t\t\t ----------------------------------------------------" << endl;
                                    h[tt].tongtienxuat = h[tt].don_gia * fakeslxuat;
                                    cout << "\t\t\tTONG TIEN PHAI TRA"
                                        << "                                  " << h[tt].tongtienxuat << endl;

                                    cout << "\t\t\t ----------------------------------------------------" << endl;
                                    h[tt].soluonghangton = h[tt].soluonghangton - fakeslxuat;
                                    cout << "Thoi gian xuat bien lai: " << kh.dt << endl;
                                    cout << "SO LUONG HANG TON TRONG KHO: " << h[tt].soluonghangton << '\n';
                                }
                            }
                            break;
                        case 0:
                            cout << "\n\t\tThoat chuong trinh" << endl;
                            cout << "\n\t\tPress any key to continue!!!" << endl;
                            getch();
                            break;
                        }
                    }
                }
            }
            else
            {
                cout << "\n\t\tSAI MAT KHAU!!!" << endl;
            }
        }
        else
        {
            cout << "\nSAI TAI KHOAN!!!" << endl;
        }
        i++;
    }
    if (i > 2)
    {
        cout << "\n\t\tDA NHAP SAI QUA 3 LAN, THOAT CHUONG TRINH" << endl;
    }
    return 0;
}