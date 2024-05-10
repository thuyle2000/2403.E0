// ham kiem tra du lieu nhap tren form dang ky
function kiemTraDK(){
    //lay du lieu nhap trong o name
    let tenSV = document.getElementById("stName").value.trim();

    //kiem tra o name co nhap dung dinh dang yeu cau ko
    if(tenSV.length<6 || tenSV.length>30){
        alert("length of student name must be [6-30] chars !");
        document.getElementById("stName").focus();
        return false;
    }

    let regexTen = /^[a-z A-Z]{6,30}$/;
    if(regexTen.test(tenSV)==false){
        alert("Invalid student name (just only letters or space !)");
        document.getElementById("stName").focus();
        return false;
    }


    // lay du lieu nhap trong o email
    let email = document.getElementById("mail").value.trim();
    
    let regexMail = new RegExp("^[a-z0-9]+@[a-z0-9]{2,6}(\\.[a-z]{2,4})+$","ig");
    
    if(regexMail.test(email)==false){
        alert("Invalid email !");
        document.getElementById("mail").focus();
        return false;
    }
    
}