PGDMP     ;    9            	    y           giving     11.12 (Raspbian 11.12-0+deb10u1)    13.2     g           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false            h           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false            i           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false            j           1262    34764    giving    DATABASE     [   CREATE DATABASE giving WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE = 'en_US.UTF-8';
    DROP DATABASE giving;
                pi    false            a          0    34765    account 
   TABLE DATA           Z   COPY public.account (account_id, name, description, origin_date, total_given) FROM stdin;
    public          pi    false    196   �       c          0    34776    transaction 
   TABLE DATA           q   COPY public.transaction (trans_id, origin_date, amount, how_paid, check_number, comment, account_id) FROM stdin;
    public          pi    false    198   ?       k           0    0    account_account_id_seq    SEQUENCE SET     D   SELECT pg_catalog.setval('public.account_account_id_seq', 9, true);
          public          pi    false    197            l           0    0    transaction_trans_id_seq    SEQUENCE SET     F   SELECT pg_catalog.setval('public.transaction_trans_id_seq', 3, true);
          public          pi    false    199            a   w  x�]��N�0����� ��/vr�(+-����Ƥ��rR
<��J����Μ���q��`�S2\�Ǵ�s�a��6����:p��KXʥ�5l�k�ᶲXTl;s���s�i}�m��~J�"U�м��$5�f��?>�U؇��O������$���&��UH3q/\]�J�u�����sVP��l�Y�E����[�=�kS|����#M:�N|z�}�c�wi�s�_A"�.���a̻�u�И.9�ʪ��Z)?1, mG5(x���a�X�r�i/7k�v��>.<lf�_��4Ŵ����u�zƐ���w�V���7֍B�*#Շq����"�O������^c��[�5��xQ�	��      c   w   x�m�1�0F��>E.��l({O��B(�E�޿ Ā�7|�<�^6ؽ� J�|,�l�L��-<⏌	��W������_-��٨ե��<���]Қ��m��]�F+>,�y{�':     