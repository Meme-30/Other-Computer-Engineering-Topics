
import os

import DrawingWidget
import TextWidget

from PyQt5.QtGui import QImage, QPixmap

class FileManager:
    def __init__(self, DW, TW):
        self.DW = DW
        self.TW = TW


    def saveFile(self, name):

        if not os.path.exists(name):
            os.makedirs(name)

        with open( (name+"/"+name+".txt") , "w") as f:
            f.write(self.TW.getHTMLCode())

        if name:
            self.DW.getPixMap().save((name+"/"+name+".png"), "PNG")
        
    
    def loadFile(self, name):
        if os.path.exists(name):
            with open( (name+"/"+name+".txt") , "r") as f:
                self.TW.setHTMLCode(f.read())

            image = QImage( (name+"/"+name+".png") )
            pixmap = QPixmap.fromImage(image)

            self.DW.setPixMap(pixmap)







