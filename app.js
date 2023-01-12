const Gqs = (el) => {return document.querySelector(el)}
let textHan = Gqs(".text-handler")
imgHan = Gqs(".img-handler")
let bullet = Gqs(".bullet")
let bullet2 = Gqs(".bullet1")
    bullet.onclick = () => {
        if (bullet2.classList.contains("active")) {
         textHan.style.display = "none "
        bullet2.classList.remove("active")
         
        imgHan.style.display = "block"
        bullet.classList.add('active')     
        console.log(textHan)
        } else{
    
        }
    }
    
    bullet2.onclick =() => {
    
        if(bullet.classList.contains("active")) {   
            console.log("added")
            
            imgHan.style.display = "none "
            textHan.style.display = "block "
            bullet.classList.remove("active")
            bullet2.classList.add('active')   
        }
    }

