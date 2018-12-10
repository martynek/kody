#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  modele.py

from peewee import *
baza = SqliteDatabase('quiz.db')

class BaseModel(Model):
    class Meta:
        database = baza
        
class Kategoria(BaseModel):
    kategoria = CharField(null=False)
        
class Pytanie(BaseModel):
    pytanie = CharField(null=False)
    id_kat = ForeignKeyField(Kategoria, related_name="id")
    
class Odpowiedz(BaseModel):
    id_p = ForeignKeyField(Pytanie, related_name="id")
    odpowiedz = CharField(null=False)
    odpok = BooleanField(default=0)
    
    


def main(args):
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
