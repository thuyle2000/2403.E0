function kiemTraDN() {

    // lay du lieu nhap trong o email
    let email = document.getElementById("email").value.trim();

    let regexMail = new RegExp("^[a-z0-9]+@[a-z0-9]{2,6}(\\.[a-z]{2,4})+$", "ig");

    if (regexMail.test(email) == false) {
        alert("Invalid email !");
        document.getElementById("email").focus();
        return false;
    }


    //lay du lieu trong o password
    let pass1 = document.getElementById("pass1").value.trim();
    if (pass1.length < 3 || pass1.length > 20) {
        alert("Invalid password !");
        document.getElementById("pass1").focus();
        return false;
    }

    //lay du lieu trong o password confirm
    let pass2 = document.getElementById("pass2").value.trim();
    if (pass1 != pass2) {
        alert("password and password confirm is difference !");
        document.getElementById("pass2").focus();
        return false;
    }

    //luu du lieu email va password vo bien sessionStorage
    sessionStorage.setItem("user", email);
    sessionStorage.setItem("password", pass1);

    //luu du lieu email va password vo bien localStorage
    localStorage.setItem("user", email);
    localStorage.setItem("password", pass1);
}