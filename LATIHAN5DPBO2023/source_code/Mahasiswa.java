/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package daftarmahasiswa;

/**
 *
 * @author sekar
 */
public class Mahasiswa {
    private String nim;
    private String nama;
    private String nilai;
    private int usia;
    private String jKelamin;
    
    public Mahasiswa(String nim, String nama, String nilai, int usia, String jKelamin){
        this.nim = nim;
        this.nama = nama;
        this.nilai = nilai;
        this.usia = usia;
        this.jKelamin = jKelamin;
    }
    
    public void setNim(String nim) {
        this.nim = nim;
    }
    
    public void setNama(String nama) {
        this.nama = nama;
    }
    
    public void setNilai(String nilai) {
        this.nilai = nilai;
    }
    
    public void setUsia(int usia) {
        this.usia = usia;
    }
    
    public void setJKelamin(String jKelamin) {
        this.jKelamin = jKelamin;
    }
    
    public String getNim() {
        return this.nim;
    }
    
    public String getNama() {
        return this.nama;
    }
    
    public String getNilai() {
        return this.nilai;
    }
    
    public int getUsia() {
        return this.usia;
    }
    
    public String getJKelamin() {
        return this.jKelamin;
    }
}
