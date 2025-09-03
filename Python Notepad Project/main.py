
import DrawingWidget
import TextWidget
import FileManager

import os

import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QGridLayout, QLineEdit

class MyWidget(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        
        btn_left = TextWidget.TextUIWidget()
        btn_right = DrawingWidget.DrawingUIWidget()

        fm = FileManager.FileManager(btn_right, btn_left)

        # Create a grid layout
        grid = QGridLayout()
        self.setLayout(grid)

        btn_left.setFixedSize(500, 500)

        
        self.saveButton = QPushButton('Save', self)
        self.loadButton = QPushButton('Load', self)
        self.fileNameTextBox = QLineEdit("Note1")

        self.fileNameTextBox.setFixedSize(200, 20)


        grid.addWidget(self.saveButton, 0, 0, 1, 1)
        grid.addWidget(self.loadButton, 0, 1, 1, 1)
        grid.addWidget(self.fileNameTextBox, 0, 2, 1, 1)
        grid.addWidget(btn_left, 1, 0, 1, 4)
        grid.addWidget(btn_right, 1, 4)


        def saveButtonFunc():
            print("We're attempting to save right now")

            fm.saveFile(self.fileNameTextBox.text())
        self.saveButton.clicked.connect(saveButtonFunc)

        def loadButtonFunc():
            print("We're attempting to load right now")
            fm.loadFile(self.fileNameTextBox.text())
        self.loadButton.clicked.connect(loadButtonFunc)

        
        self.setGeometry(300, 300, 1500, 500)
        self.setWindowTitle('PyQt Widget')

if __name__ == '__main__':
    app = QApplication(sys.argv)
    widget = MyWidget()
    widget.show()
    sys.exit(app.exec_())
