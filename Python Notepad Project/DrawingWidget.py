
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QHBoxLayout, QVBoxLayout, QLabel, QComboBox
from PyQt5.QtGui import QPixmap, QPainter, QPen, QPicture
from PyQt5.QtCore import Qt, QPoint
from pathlib import Path


class DrawingWidget(QWidget):
    def __init__(self):
        super().__init__()

        self.pixmap = QPixmap(900, 900)

        self.pixmap.fill(Qt.white)

        self.paintPix = QPainter(self.pixmap)

        self.color = Qt.black
        self.pen = QPen(self.color)
        
        self.shapeMode = 0

    def changeShapeMode(self, mode):
        self.shapeMode = mode


    def paintEvent(self, event):
        painter = QPainter(self)
        painter.drawPixmap(0, 0, self.pixmap)

    def mousePressEvent(self, event):
        if(self.shapeMode != 0):
            self.paintPix.setBrush(Qt.white)
            self.pen.setColor(self.color)
            self.pen.setWidth(5)
            self.paintPix.setPen(self.pen)
            if(self.shapeMode == 1):
                self.paintPix.drawEllipse(event.x(), event.y(), 100, 100)
            elif(self.shapeMode == 2):
                self.paintPix.drawRect(event.x(), event.y(), 100, 100)
            self.update()

    def mouseMoveEvent(self, event):
        if(self.shapeMode == 0):
            self.paintPix.setBrush(self.color)
            self.pen.setColor(self.color)
            self.pen.setWidth(1)
            self.paintPix.setPen(self.pen)
            self.paintPix.drawEllipse(event.x(), event.y(), 5, 5)
            self.update()
        if(self.shapeMode == 4):
            self.paintPix.setBrush(Qt.white)
            self.pen.setColor(Qt.white)
            self.pen.setWidth(3)
            self.paintPix.setPen(self.pen)
            self.paintPix.drawEllipse(event.x(), event.y(), 20, 20)
            self.update()

    def set_color(self, color):
        self.color = color

    def getPixMap(self):
        return self.pixmap
    
    def setPixMap(self, content):
        self.paintPix.drawPixmap(0, 0, content)
        self.update()
            

class DrawingUIWidget(QWidget):
    def __init__(self):
        super().__init__()

        self.drawing_widget = DrawingWidget()
        self.button1 = QPushButton('Draw', self)
        self.button2 = QPushButton('Circle', self)
        self.button3 = QPushButton('Rectangle', self)
        self.button4 = QPushButton('Erase', self)
        self.colorBox = QComboBox(self)
        colorList = ["Black", "Red", "Green", "Blue"]
        self.colorBox.addItems(colorList)

        self.button_layout = QHBoxLayout()
        self.button_layout.addWidget(self.button1)
        self.button_layout.addWidget(self.button2)
        self.button_layout.addWidget(self.button3)
        self.button_layout.addWidget(self.button4)
        self.button_layout.addWidget(self.colorBox)

        self.layout = QVBoxLayout(self)
        self.layout.addLayout(self.button_layout)
        self.layout.addWidget(self.drawing_widget)


        self.setFixedSize(900, 510)
        #self.setWindowTitle('My PyQt Widget')
        #self.setGeometry(100, 100, 900, 900)

        def button1Func():
            self.drawing_widget.changeShapeMode(0)
        self.button1.clicked.connect(button1Func)
        def button2Func():
            self.drawing_widget.changeShapeMode(1)
        self.button2.clicked.connect(button2Func)
        def button3Func():
            self.drawing_widget.changeShapeMode(2)
        self.button3.clicked.connect(button3Func)
        def button4Func():
            self.drawing_widget.changeShapeMode(4)
        self.button4.clicked.connect(button4Func)
        def button5Func():
            color = self.colorBox.currentText()
            if color == "Black":
                self.drawing_widget.color = Qt.black
            elif color == "Red":
                self.drawing_widget.color = Qt.red
            elif color == "Green":
                self.drawing_widget.color = Qt.green
            elif color == "Blue":
                self.drawing_widget.color = Qt.blue
        self.colorBox.currentIndexChanged.connect(button5Func)

    def getPixMap(self):
        return self.drawing_widget.getPixMap()
    
    def setPixMap(self, content):
        return self.drawing_widget.setPixMap(content)

    




    
