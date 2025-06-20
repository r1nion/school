# プログラミング課題管理リポジトリ

このリポジトリは、プログラミングの授業で出された課題を整理・管理するためのものです。  
課題は回ごと・番号ごとに整理され、ソースコードおよび対応する実行ファイルを含みます。

## ファイル命名規則

- `hw[授業回]-[課題番号]`  
  例: `hw02-01`（第2回・課題1）

## ディレクトリ構成

- `codes/` : ソースコード
- `MacExecute/` : Mac用実行ファイル
- `WinExecute/` : Windows用実行ファイル（.exe形式）

## ビルドと実行について

- Mac用実行ファイルは`Mach-O`形式で`MacExecute/`にあります。
- Windows用実行ファイルは`.exe`形式で`WinExecute/`にあります。
- Apple Silicon MacおよびWindows(x86-64,ARM)でのみテストしています。

## 注意事項

- 各実行ファイルは対応するプラットフォーム（MacまたはWindows）でのみ動作確認を行っています。
- 他の環境での動作は保証していません。

## その他
- ターミナル等にて `git pull https://github.com/r1nion/school`で、ローカル環境にコピーできます。(Gitが入っていない場合はできません。その時は調べてください。)
---

何かご不明な点があれば[Issue](https://github.com/r1nion/school/issues)からご連絡ください。
