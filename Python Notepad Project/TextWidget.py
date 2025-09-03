import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QTextEdit, QGridLayout
from PyQt5.QtWebEngineWidgets import QWebEngineView
import threading
import time



class TextUIWidget(QWidget):
    def __init__(self):
        super().__init__()
        self.selectedText = ""
        self.textRegion = QTextEdit()

        self.button1 = QPushButton('Bold', self)
        self.button2 = QPushButton('Italic', self)
        self.button3 = QPushButton('Underline', self)
        self.button4 = QPushButton('Normalize', self)

        layout = QGridLayout(self)
        layout.addWidget(self.button1, 0, 0)
        layout.addWidget(self.button2, 0, 1)
        layout.addWidget(self.button3, 0, 2)
        layout.addWidget(self.button4, 0, 3)
        layout.addWidget(self.textRegion, 1, 0, 1, 4)


        self.textRegion.setFixedSize(500, 500)


        self.setWindowTitle('My PyQt Widget')
        self.setGeometry(100, 100, 500, 500)


        self.button1.clicked.connect(self.BoldText)
        self.button2.clicked.connect(self.italicText)
        self.button3.clicked.connect(self.UnderlineText)
        self.button4.clicked.connect(self.NormalizeText)

    def BoldText(self):
        cursor = self.textRegion.textCursor()
        selected_text = cursor.selectedText()
        cursor.insertHtml("<b>"+selected_text+"</b>")

    def italicText(self):
        cursor = self.textRegion.textCursor()
        selected_text = cursor.selectedText()
        cursor.insertHtml("<i>"+selected_text+"</i>")

    def UnderlineText(self):
        cursor = self.textRegion.textCursor()
        selected_text = cursor.selectedText()
        cursor.insertHtml("<u>"+selected_text+"</u>")

    def NormalizeText(self):
        cursor = self.textRegion.textCursor()
        selected_text = cursor.selectedText()
        cursor.insertHtml("<span style=\"font-weight:normal;\">"+selected_text+"</span>")

    def getHTMLCode(self):
        return self.textRegion.toHtml()
    
    def setHTMLCode(self, content):
        self.textRegion.clear()
        self.textRegion.insertHtml(content)

