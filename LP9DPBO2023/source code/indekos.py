from hunian import Hunian

class Indekos(Hunian):
    def __init__(self, nama_pemilik, nama_penghuni, kamar_mandi):
        super().__init__("Indekos")
        self.nama_pemilik = nama_pemilik
        self.nama_penghuni = nama_penghuni
        self.kamar_mandi = kamar_mandi

    def get_dokumen(self):
        return "Bukti kontrak indekos oleh " + self.nama_penghuni + " dari " + self.nama_pemilik + "."

    def get_nama_pemilik(self):
        return self.nama_pemilik

    def get_nama_penghuni(self):
        return self.nama_penghuni

    def get_summary(self):
        return "Hunian Indekos."
    
    def get_detail(self):
        return "kamar mandi : " + self.kamar_mandi + "\n"
    
    def get_foto(self):
        return "https://www.cekpremi.com/blog/wp-content/uploads/2021/04/bisnis-kos-kosan.jpeg"