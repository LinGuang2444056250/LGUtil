function LGGetHTMLElementsAtPoint(x,y) {
    var tags = ",";
    var e = document.elementFromPoint(x,y);
    while (e) {
        if (e.tagName) {
            tags += e.tagName + ',';
        }
        e = e.parentNode;
    }
    return tags;
}

function LGGetLinkSRCAtPoint(x,y) {
    var tags = "";
    var e = document.elementFromPoint(x,y);
    while (e) {
        if (e.src) {
            tags += e.src;
            break;
        }
        e = e.parentNode;
    }
    return tags;
}

function LGGetLinkHREFAtPoint(x,y) {
    var tags = "";
    var e = document.elementFromPoint(x,y);
    while (e) {
        if (e.href) {
            tags += e.href;
            break;
        }
        e = e.parentNode;
    }
    return tags;
}

function LGGetAllImage() {
    var imgs = document.getElementsByTagName("img");
    var imgURLs = "";
    for (var i = 0; i<imgs.length;i++)
    {
        if(imgs[i].width > 99 && imgs[i].height > 99)
        {
            if(imgURLs == "")
            {
                imgURLs = imgs[i].src;
            }
            else
            {
                imgURLs += '@img@img@' + imgs[i].src;
            }
        }
    }
    return imgURLs;
}