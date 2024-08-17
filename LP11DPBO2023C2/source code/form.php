<?php

/******************************************
Asisten Pemrogaman 11
 ******************************************/

include("model/Template.class.php");
include("model/DB.class.php");
include("model/Pasien.class.php");
include("model/TabelPasien.class.php");
include("view/FormPasien.php");

$tp = new FormPasienView();

if (isset($_POST['add'])) {
    $tp->add($_POST);
} else if (isset($_GET['idx'])) {
    $tp->tampilEdit($_GET['idx']);
} else if (isset($_POST['edit'])) {
    $tp->edit($_POST);
} else {
    $data = $tp->tampil();
}
